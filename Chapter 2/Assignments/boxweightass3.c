/* Computes the dimensional weight of a 12" x 10" x 8" box */
#include <stdio.h>

int main(void)
{
int height = 10;
int length = 10;
int width = 10;
int volume = height * width * length;
printf ("Dimensions: %dx%dx%d\n", length, width, height);
printf ("Volume (cubic inches): %d\n", volume);
printf ("Dimensional weight (pounds): %d\n", ((volume + 165) / 166));
return 0;
}
