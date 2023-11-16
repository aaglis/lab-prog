#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

  srand(time(NULL));

  int base = 3, i;
  long int resultado;

  for(i = 0; i <= 7; i++) {
    resultado = pow(base, i);
    printf("\t%d^%d = %ld\n", base, i, resultado);

  }
  return 0;
}