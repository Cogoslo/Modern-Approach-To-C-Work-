#include <stdio.h>

int main(void)
{
int x = 0;
printf ("What's X:");
scanf ("%d", &x);

printf ("polynomal is %d",
((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);
return 0;
}
