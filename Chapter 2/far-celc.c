#include <stdio.h>
#define FR_PT 32.0f
#define S_F (5.0f / 9.0f)
/*Constants for conversion far-celcius
FR_PT is Freezing Point (float)
S_F is Scale Factor (float) */

int main(void)
{
  float f, c;
  /* f for fareignheith c for celcius */
  printf("Enter Temp In F:");
  scanf("%f", &f);
  c = (f - FR_PT) * S_F;
  printf("C Equiv: %.1f\n", c);
  return 0;
}
