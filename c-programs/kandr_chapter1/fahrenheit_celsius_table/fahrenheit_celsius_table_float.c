#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version */
main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;      /* lower limit of temperature table */
  upper = 300;    /* upper limit of temperature table */
  step = 20;      /* step size */

  fahr = lower;
  printf("Temperature Table\n");
  printf("%10s %7s\n","Fahrenheit","Celsius");    
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    //    printf("%.0f %12.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
