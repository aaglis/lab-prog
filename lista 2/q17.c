#include <stdio.h>

int main(void) {

  float gCelsius = 10, gFh;

  for(; gCelsius <= 100; gCelsius += 10) {

    gFh = (gCelsius * 1.8) + 32;

    printf("\t%.1f Graus Celsius -> %.1f Graus Fahrenheit\n", gCelsius, gFh);
  } 


  return 0;
}