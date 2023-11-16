// pressione CNTRL + C para parar o loop infinito
#include <stdio.h>

int main(void) {
  int i;
  double valorPi = 0, termo;

  for (i = 1; i < 1000; i++) {
    termo = 4.0 / (2 * i - 1);

    if (i % 2) {
      valorPi += termo;
    } 
    else {
      valorPi -= termo;
    }

    printf("\t%do termo: %lf\n", i, valorPi);
  }

  return 0;
}