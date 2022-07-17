#include <stdio.h>
#define PI 3.14159265358979323846f

int main (void)
{
int r;
printf ("What is the Radius Of Your Sphere, Squire:");
scanf("%d", &r);
printf ("%f",((4.0f/3.0f)*PI*(r*r*r)));
}
