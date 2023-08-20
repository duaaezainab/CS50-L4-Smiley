#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Change all black pixels to white.
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (image[i][j].rgbtRed == 0x00 && image[i][j].rgbtGreen == 0x00 && image[i][j].rgbtBlue == 0x00) // x is ex as in letter x. 0x00 value for all primary colors make black.
            {
                image[i][j].rgbtRed = 0xff;
                image[i][j].rgbtGreen = 0xff;
                image[i][j].rgbtBlue = 0xff;
            }
        }
    }
}
