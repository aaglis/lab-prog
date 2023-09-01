#include <stdio.h>

int main(void) {
  int numeroDigitado, primeiroNumero, segundoNumero, terceiroNumero;

  printf("Digite um numero inteiro com tres digitos: ");
  scanf("%d", &numeroDigitado);

  primeiroNumero = numeroDigitado / 100;
  segundoNumero = (numeroDigitado % 100) / 10; // pega o resto da divisao do numero digitado por 100, e divide por 10
  terceiroNumero = numeroDigitado % 10;

  printf("Voce digitou o numero: %d\n", numeroDigitado);
  printf("Sua forma inversa : %d%d%d\n", terceiroNumero, segundoNumero, primeiroNumero);

  return 0;
}
