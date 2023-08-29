#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int numeroDigitado, valorAbsoluto;

  printf("Digite um numero inteiro: ");
  scanf("%d", &numeroDigitado);

  valorAbsoluto = abs(numeroDigitado);

  printf("o valor absoluto do numero %d, e %d!", numeroDigitado, valorAbsoluto);

  return 0;
}