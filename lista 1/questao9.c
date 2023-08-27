#include <stdio.h>

int main(void) {

  int numeroDigitado;

  printf("Digite um numero inteiro: ");
  scanf("%d", & numeroDigitado);

  printf("Voce digitou o numero: %d\n", numeroDigitado);
  printf("O sucessor deste numero e: %d\n", numeroDigitado + 1); // sucessor 
  printf("O antecessor deste numero e: %d\n", numeroDigitado - 1); // antecessor

  return 0;
}