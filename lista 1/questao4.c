#include <stdio.h>

int main(void) {

  int numeroDigitado;

  printf("Digite um numero inteiro:\n");
  scanf("%d", &numeroDigitado);

  printf("O numero digitado foi: %d\n", numeroDigitado);
  printf("Seu triplo e: %d\n", numeroDigitado * 3); // tiplo
  printf("Seu quadrado e: %d\n", numeroDigitado * numeroDigitado); // quadrado
  printf("Seu meio e: %d\n", numeroDigitado / 2); // meio

  return 0;
}