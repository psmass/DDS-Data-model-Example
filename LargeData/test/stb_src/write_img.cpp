#include <stdint.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#define STBI_ONLY_PNG
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

#define CHANNEL_NUM 3

int main()
{
    int width;
    int height;
    int bpp;

    // uint8_t *rgb_image;
    // rgb_image = (uint8_t *)malloc(width * height * CHANNEL_NUM);
    uint8_t *rgb_image = stbi_load("test1.png", &width, &height, &bpp, CHANNEL_NUM);
    if (rgb_image == NULL)
    {
        puts("Error in loading the image");
        return -1;
    }
    // Write your code to populate rgb_image here
    if (!stbi_write_png("test2.png", width, height, CHANNEL_NUM, rgb_image, width * CHANNEL_NUM))
    {
        puts("Error writing png file");
        return -1;
    }

    free(rgb_image);

    return 0;
}