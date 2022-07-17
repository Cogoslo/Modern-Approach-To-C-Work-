#include <stdio.h>

int main(void)
{
int dollar, twenty, five, ten, one;
printf ("How Many Dollas: ");
scanf("%d", &dollar);
twenty = (dollar/20);
dollar = dollar - (twenty*20);
ten = (dollar/10);
dollar = dollar - (ten*10);
five = (dollar/5);
dollar = dollar - (five*5);
one = dollar;
printf("20's:%d \n10's:%d \n5's:%d \n1's:%d \n", twenty, ten, five, one );
}
