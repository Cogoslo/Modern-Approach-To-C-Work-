#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265358979323846f

int main (void)
{
int r;
printf ("What's the radius of one of your nuts in cm:");
scanf("%d", &r);
printf ("Your nuts are %f CM Big!",((4.0f/3.0f)*PI*(r*r*r))*2);
printf("\n");
system("pause");
return 0;
}
