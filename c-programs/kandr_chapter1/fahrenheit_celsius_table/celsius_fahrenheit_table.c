#include<stdio.h>

/* print Celsius to Fahrenheit table */
main(){

  float celsius, fahrenheit;
  int upper, lower, step;

  upper = 100;
  lower = 0;
  step = 10;

  printf("Temperature Table\n");    
  printf("Celsius Fahrenheit\n"); 
  celsius = lower;
  while (celsius <= upper){
    fahrenheit = ((9.0/5.0) * celsius) + 32.0;
    printf("%7.0f %10.1f\n", celsius, fahrenheit);
    celsius = celsius + step;      
  }       
}
