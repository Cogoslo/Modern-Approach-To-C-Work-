#include <stdio.h>

int main(void)
{
float len;
float rate;
float payment;
printf("what's your loan currently:");
scanf("%f", &len);
printf("what's your interest rate currently:");
scanf("%f", &rate);
printf("what's your monthly payment currently:");
scanf("%f", &payment);
/* create floats and get them filled in */
len = len+len*(((rate/12)/100))-payment;
printf("Balance Remaining After first payment %.2f\n", len);
len = len+len*(((rate/12)/100))-payment;
printf("Balance Remaining After Second payment %.2f\n", len);
len = len+len*(((rate/12)/100))-payment;
printf("Balance Remaining After Third payment %.2f\n", len);
}
