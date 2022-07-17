/* Computes the dimensional weight of a 12" x 10" x 8" box */
#include <stdio.h>

int main(void)
{
int height, length, width, volume, weight;
/* create variables */
printf("Enter Height Of Box: ");
scanf("%d", &height);
printf("Enter Length Of Box: ");
scanf("%d", &length);
printf("Enter Height Of Box: ");
scanf("%d", &width);

/* Recieve User Input */
volume = height * width * length;
weight = (volume + 165) / 166;
/* do calculations */
printf ("Dimensions: %dx%dx%d\n", length, width, height);
printf ("Volume (cubic inches): %d\n", volume);
printf ("Dimensional weight (pounds): %d\n", weight);
/* print outputs */
return 0;
/* end program */
}
