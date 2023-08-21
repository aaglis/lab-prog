#include <stdio.h> // biblioteca padrao

int main(void) {

  int numeroDigitado;

  printf("Digite o número que você deseja converter:\n");
  scanf("%d", &numeroDigitado);

  printf("O numero que voce digitou foi %d\n", numeroDigitado); // mostra em decimal
  printf("Convertido para Hexadecimal: %X\n", numeroDigitado); // mostra em hexa
  printf("Convertido para Octal: %o\n", numeroDigitado); // mostra em octal

  return 0;
}