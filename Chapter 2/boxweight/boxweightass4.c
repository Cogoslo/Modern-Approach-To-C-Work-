/* Computes the dimensional weight of a 12" x 10" x 8" box */
#include <stdio.h>

int main(void)
{
int height = 8;
int length = 12;
int width = 10;
volume = height * width * length;
weight = (volume + 165) / 166;
printf ("Dimensions: %dx%dx%d\n", length, width, height);
printf ("Volume (cubic inches): %d\n", volume);
printf ("Dimensional weight (pounds): %d\n", (weight=(volume + 165) / 166););
return 0;
}
