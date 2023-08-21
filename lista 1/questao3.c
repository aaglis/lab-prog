#include <stdio.h>

int main(void) {

  float numeroDigitado;

  printf("Digite um numero real:\n");
  scanf("%f", &numeroDigitado);

  printf("o numero que voce digitou foi: %f\n", numeroDigitado); // imprime o numero real
  printf("o numero que voce digitou formatado para\n uma casa decimal: %.1f", numeroDigitado); // imprime o numero real com somente uma casa decimal

  return 0;
}