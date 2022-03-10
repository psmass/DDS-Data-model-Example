
![](https://github.com/psmass/DDSexamples/blob/master/RtiAsOne.png)


# THIS DIRECTORY CONTAINS:

1. Two simple data models showing 'short-lived' (non-Objective state) between a Controller and one of 
potentially many Devices. 

2. A discussion, below in this README.md file, regarding more complex Request/Reply patterns that can exist 
along with the criteria that necessitates them.

## Data Model for fairly simple Command(Request) w/ Replys :

### Model 1) Controller / Device 

This model will have a Controller and a Slave Device (where there could be many devices).

The Device will announce itself with a Device Announcement (DA) topic. This provides the Controller with a deviceID in which to address the specific device. The DA will use a QoS of Durable, then the Device will wait to be commanded.

The Controller will recognize the device and issue a command to TURN_ON. Controller will then periodically request status (of course if the status is periodic, this 'request' could be implicitly done via subscribing to the Status topic alone)

In this simple example, there is a one-to-one correspondence between Controller Commands and Device Replies. That is, for these two commands, TOPIC_REQUEST_CONFIGURE_DEVICE, and TOPIC_REQUEST_DEVICE_STATUS, the Device will respond with TOPIC_DEVICE_CONFIGURATON_REPLY and TOPIC_DEVICE_STATUS_REPLY.

The Device will filter for "myCommands" (i.e., on targetDeviceID), the Controller does not filter since it may expect key'd responses from many deviceIDs.

To keep things simple the device will not issue Alarms or any other non-requested topics except the initial DA.

### Model 2) Client (Consumer) / Server (Service)

This model has a well known service and may have multiple clients or consumers. The service, if Objective State, would need some protocol to both update the state of the Objective Command and provide deterministic behavior in the event of multiple clients issue conflicting commands. Choices such as implicit or explicit locks to prevent a super-ceding command, or perhaps canceling and override of the current command running by the super-ceding command. Another thought might be to use Ownership Strength QoS.

To keep the model simple, in this example, the Service won't use Objective State, and therefore commands will process immediately and in the order received. Here we'll provide one consumer periodically requesting status (TOPIC_REQUEST_DEVICE_STATUS) of one service. The Service will send back a status reply (TOPIC_DEVICE_STATUS_REPLY). Again, this status request could be done implicitly via subscribing to a periodic a topic periodically emitted by the service (e.g., TOPIC_SERVICE_FOO_STATUS)

# Request (Command) / Reply Discussion 

Command Patterns can be different depending upon requestor/requestee topology, as well as other criteria in dermining the best pattern which fits the problem space.  

**Command/Status request / w/immediate Response**

**One Controller requesting Command/Status/ request to one of many Devices**

 	Notes:
		1. This is still one-to-one relationship, but a given command instance can be sent to many controllers, one at a time.
		2. The device must first announce itself (and potentially be accepted/handshake) for the controller to recognize a new device to control

Use-case Single or redundant Controller to many devices (but one at a time), e.g., as a device 'Announces itself' the controller solicits the devices capacity or capabilities before commanding it.

	           Requesting Controller 		 |		  Responding Device
	      Foo Comnmand Issued (targetDevID) ------>	 |      (content filter on target(my)DevId)
							 |
				         <-------------  | Foo Response(cmdReq @key'd (my)deviceID, Result / Status)
					 		 | 

Here the Command key'd targetDeviceID allows many requests to different devices while allowing a given device to set a content filter for command FOO directed to it alone. As well the response holds the key'd deviceID allowing the requestor to both correlate outstanding requests as well as receive request instances and sample from multiple devices.


**Many Devices Requesting Command to one Controller** (two or more if redundant)

(note this is still a one-to-one relationship, where each device, sends an instance of the same command to one controller.)

Use-case for this example may be within the same system above but where the multiple devices are each, individually requesting something of the controller (e.g., approval to be accepted on the system).


	              Requesting Device              	   |		Responding Controller
    Foo Command Issued (Key'd (my)deviceDevID) ------> |
							   |
			                    <------------- | Foo Response(cmdReq reqDevID, Result / Status)
	  (content filter on target(my)DevId)		   | 

Here the Command key'd reqDeviceID allows many requests from different devices to be handled as separate instances by the controller. The controller copies the device from the request to the response. The Requesting device may set a content filter on it's deviceID to filter out only instances directed exclusively to it's requests. 

A variant of the two above pattern, One-controller/many devices, is used with the Tactical Micro-grid standard(TMS).  A response to a device or controller is generic and only provides feedback as to the commands acceptance or failure. The requestee (Controller or Device) then issues a status update on state change that is subscribed to by the requestor. Note: Since on-state-change is aperodic, if liveliness is used care should be taken by the application to periodically 'assert liveliness' manually to maintain good writer state while not sending actual data (refer to Asserting liveliness)

The differences in the above two use-cases is whether the device puts the Content Filter on the command or the response, and how the devices Key'd ID (the one of many Identifier) is placed in the command dependent upon who is sending the command.

**Consumer/Service, short-lived(immediate) and long-lived commands** (e.g. Objective State)

(e.g. Unmanned Maritime Architecture (UMAA)

Generally there is a one-to-one relationship between consumer of a service and the service provider (the service).  The service will positively perform any requested command(1)) so long as a current commmand is not in progress. If more than one consumer is directing the same service, its within the context of the service to understand the situation and recognized if it is permitted or not. For UMAA, services such as steerage, thrust, anchor control, it makes no sense to have mulitiple controllers issuing commands except in the case of redundancy (here one controllers commands are recognized at a time dependent upon Active or Standby role.)  Where a service, is status only - not commanded, for example, providing sensor data - e.g., temperature, a many-to-one relationship is a possible use-case. Here the service application is unaware of the number of subscribers as this is handled by DDS. 

	Notes: (1) DDS Secure can be  used to authenticate permissions of a specific command from a specific consumer.

This pattern also handles the case where a command is not necessarily immediate (can take minutes/hours/days to run - e.g., move to a way point. With long-lived commands one needs the abilty to manage the lifecyle of a command and monitor it's state.
As well, if a command is running, it must be cancelled before antoher command is issued by any consumer to the service (care must be taken to allow any consumer to cancel a currently running command). The consumer must subscribe to bothe the command_state response (how the command itself executing - e.g. accepted, executing, error, cancelled, completed) and how the service is responding to the commmand - e.g. gps position and speed as a result of an e.g. global_pos command/way point command).


	                      Foo Consumer 		 	  |	             Foo Service
	      Foo Service Comnmand Issued (Key'd deviceID) -----> |
	 	       		 	  	    	  	  |
					           <------------- | Foo command_state (cmdReq reqDevID, cmd state)
							  	  | (content filter on myDevId)

Foo Consumer Subscribes to Foo service reports allowing the it to monitor the state of the Foo Service and how it is performing it's service relative to any commands issued.
Foo Consumer subscribes to Foo Service command_state (with optional content filter on requestDevID==myDevID) on command_state to monitor the command.  It may cancel a command by a DDS dispose operation and then monitor the command_state for cancel (or complete/error etc if the command terminated prior to cancel processing).

**Status / Command Response**
From the above patterns there are three ways in which to get status:
 * Consumer Requests Status to service, service responds w/explict directed status report
 * Consumer sends command to service while monitoring subscribed aperiodic status topic published by service upon change (TMS)
 * Consumer sends command to service while monitoring subscribed periodic status topic published by service (UMAA)
 
**Connext Request / Reply patterns**
(refer to Chapter 26 of the Connext Core Libraries manual)

Because Request/Reply is a common pub/sub data-centric pattern, Connext DDS Provides native support for it, with both the standard synchronous (blocking) call as well as an asynchronous (non-blocking) calls.

Patterns include:
 * Single Request / Single Reply 
 * Multiple requests from a given requester (Consumer) w/multiple replies (w/Correlation requests to replies) [Use case?]
 * Single request / Multiple replies - Use-cases include:  getting multiple sets of data back from a application level wild-card query, getting command state back for a command non-immediate command (e.g. UMAA command state such as {accepted, exectuing, complete, error, cancelled})
 * Single Request / Multiple repliers. Use-case includes - one command to many drones or devices, where each will reply with it's instance data. The latter could be a "best shooter" where the application is looking for prospective shooters and thier probability of hitting a target vs. weapon expense.

