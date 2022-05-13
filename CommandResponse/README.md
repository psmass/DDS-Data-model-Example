
![](https://github.com/psmass/DDSexamples/blob/master/RtiAsOne.png)


# **THIS DIRECTORY CONTAINS:**

1. An implementation of a the Master / Slave model using the Objective State pattern. 
2. Discussion
	 - Objective State pattern.
 	 - Controller / Device and Consumer / Service data command/Response Models.

## **Implementation Example of a Master / Slave Model using the Objective State Pattern**

The example coded here, will have a Master Controller and a Slave Device (where there could be many devices, but one logical controller), and use the Objective State Pattern (see below).

To keep things simple, there are two topics:

1. **DeviceState**, issued durably from the Device upon state change. This Topic is key'd with the deviceID which identifies the device instance and allows a controller to maintain multiple devices.
	
	In this example, the Device State can be {UNITIALIZED, ON, OFF, ERROR}
	The intial DeviceState is UNINITIALIZED and lets the controller know this is a new device instance.  There is no explicit request for status as the act of subscribing provides implicit interest.
2. **RequestConfigureDevice**, issued with QoS of reliable reliability from the Controller to the Device.
	The Request has a targeDeviceID that the device can filter on such that it only receieves requests directed to it.
	For this example, a Request to TURN_ON will be sent, which will result in a DeviceState change (i.e., no explict acknowledegment/reply)

	Note: This topic does not require a Key'd instance ID since a device only receives the one "instance" set by a filter for the targetDeviceID. 

	**Controller behavior**

	Upon initialization, the Controller will subscribe for all instances (non-filtered) of a DeviceStatus topic. The DeviceState topic is sent from any device and includes the device state along with the DeviceID which identifies the Key'd instance. Upon seeing a new Device (state unitialized), the controller will issue RequestConfigureDevice to the targetID of the device, to change it's state to ON or OFF. The controller will then monitor the DeviceState topic for change. There is no explicit RequestConfigureDevice Acknowledgement.

	**Device behavior**

	Upon initialization, the Device will publish default device State (Unititialized) key'd with it's deviceID. This provides the Controller with a deviceID in which to address the specific device. DeviceState uses QoS of Durable so that the Device Application need not periodically state (only upon change). The Device will then wait to be commanded.

	The Device will filter on the targetID using it's own ID. The results in the device listening for "myRequests".

	To keep things simple the device will not issue Alarms or any other non-requested topics except the State Change.

## **Discussion**
### **Objective State Pattern**

Orthogonal to the Controller / Device or Consumer / Server models (discussed below) is the Objective State pattern. The Objective state pattern embodies the idea of issuing a command or Request with an Objective and then monitoring the associated topic(s) to verify the requesee is achieving the Objective. Independentlly, the system may also provide direct feedback on the command's state, indicating the command state (i.e.,  accepted, executing, aborted, or completed (with and without error)). Key to Objective State is that the system response determines if the Objective has been achieved and not the response to the command itself. The latter is typically used to clean up resources or ensure appropriate synchronization or blocking of requests from mulitiple sources. 

An example of an Objective State Pattern is where a vehicle is commanded to a waypoint. The system may provide feedback as to the command state (accepted, executing etc.) but the GPS location topic is used to determine that the system is responding as commanded. 

An example of a non-Objective state is where the correlated response to the command itself determines whether it has executed properly (e.g., Command Completed Sucess / Failure).

### **Controller / Device Model ** 

The Controller / Device Model has one or more slave devices, being commanded by a logical** Master Controller.

In this model, the slave device must somehow 'Announce' itself on a topic the controller is monitoring. The Controller and Device may then handshake to ascertain capabilities. While the Device may request something of the Controller, usually the Controller is the 'Master' and directs the Device to activate itself for the given application. The specific interaction is implementation dependent. 

Here the use of Objective State may be used. In this case, rather than an explicit and correlated state response to a command, a periodic, or 'on-change' state topic is provided by the requestee that the requestor monitors. 

** note we use the term logical as the a Controller could be redundant but logically is one unit.

Use-case for this example may be within the same system above but where the multiple devices are each, individually requesting something of the controller (e.g., approval to be accepted on the system).


	              Requesting Device              	   |		Responding Controller
    Foo Command Issued (Key'd (my)deviceDevID) ------> |
							   |
			                    <------------- | Foo Response(cmdReq reqDevID, Result / Status)
	  (content filter on target(my)DevId)		   | 

Use-case Single or redundant Controller to many devices (but one at a time), e.g., as a device 'Announces itself' the controller solicits the devices capacity or capabilities before commanding it.


	                      Foo Consumer 		 	  |	             Foo Service
	      Foo Service Comnmand Issued (Key'd deviceID) -----> |
	 	       		 	  	    	  	  |
					           <------------- | Foo command_state (cmdReq reqDevID, cmd state)
							  	  | (content filter on myDevId)

The differences in the above two use-cases is whether the device puts the Content Filter on the command or the response, and how the devices Key'd ID (the one of many Identifier) is placed in the command dependent upon who is sending the command.

*Tactical Micro-grid standard(TMS)* is an example of this type model, and uses Objective State.  A response to a device or controller is generic and only provides feedback as to the commands acceptance or failure. The requestee (Controller or Device) then issues a status update on state change that is subscribed to by the requestor. Note: Since on-state-change is aperodic, if liveliness is used care should be taken by the application to periodically 'assert liveliness' manually to maintain good writer state while not sending actual data (refer to Asserting liveliness)
### **Consumer / Service Model**

Sometimes referred to as a Client / Server model, this model has a well known Provider Service that one or more Clients are interested in Consuming.  Here the Client issues a command to the logical** Server and either gets a correlated response (non-Objective State) or monitors the appropriate topics to ensure the Objective has been / is being executed. In this model the Client is the 'Master' and the Service is the "Slave". Again, nothing precludes either the Consumer and/or the Service issuing requests of the other, but this is not typically the case.
  
** note we use the term logical as the service could be redundant but logically is one unit.

*Unmanned Maritime Architecture (UMAA)* is an example of this model, and uses Objective State

Generally there is a one-to-one relationship between consumer of a service and the service provider (the service).  The service will  perform any requested command(1)) so long as a current commmand is not in progress. If more than one consumer is directing the same service, its within the context of the service to understand the situation and recognized if it is permitted or not. For UMAA, services such as steerage, thrust, anchor control, it makes no sense to have mulitiple controllers issuing commands except in the case of redundancy (here one controllers commands are recognized at a time dependent upon Active or Standby role.)  Where a service, is status only - not commanded, for example, providing sensor data - e.g., temperature, a many-to-one relationship is a possible use-case. Here the service application is unaware of the number of subscribers as this is handled by DDS. 

	Notes: (1) DDS Secure can be  used to authenticate permissions of a specific command from a specific consumer.

This pattern also handles the case where a command is not necessarily immediate (can take minutes/hours/days to run - e.g., move to a way point. With long-lived commands one needs the abilty to manage the lifecyle of a command and monitor it's state.
As well, if a command is running, it must be cancelled before antoher command is issued by any consumer to the service (care must be taken to allow any consumer to cancel a currently running command). The consumer must subscribe to bothe the command_state response (how the command itself executing - e.g. accepted, executing, error, cancelled, completed) and how the service is responding to the commmand - e.g. gps position and speed as a result of an e.g. global_pos command/way point command).

**Connext Request / Reply patterns**
(refer to Chapter 26 of the Connext Core Libraries manual)

Because Request/Reply is a common pub/sub data-centric pattern, Connext DDS Provides native support for it, with both the standard synchronous (blocking) call as well as an asynchronous (non-blocking) calls.

Patterns include:
 * Single Request / Single Reply 
 * Multiple requests from a given requester (Consumer) w/multiple replies (w/Correlation requests to replies) [Use case?]
 * Single request / Multiple replies - Use-cases include:  getting multiple sets of data back from a application level wild-card query, getting command state back for a command non-immediate command (e.g. UMAA command state such as {accepted, exectuing, complete, error, cancelled})
 * Single Request / Multiple repliers. Use-case includes - one command to many drones or devices, where each will reply with it's instance data. The latter could be a "best shooter" where the application is looking for prospective shooters and thier probability of hitting a target vs. weapon expense.

