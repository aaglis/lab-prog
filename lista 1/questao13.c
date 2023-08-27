#include <stdio.h>

int main (void) {

  float primeiroNumero, segundoNumero, troca;

  printf("Digite o primeiro numero:");
  scanf("%f", &primeiroNumero);
  printf("Digite o segundo numero:");
  scanf("%f", &segundoNumero);

  troca = primeiroNumero;
  primeiroNumero = segundoNumero;
  segundoNumero = troca;

  printf("Depois da troca, temos:\n primeiro numero: %.2f\n", primeiroNumero);
  printf("segundo numero: %.2f\n", segundoNumero);

  return 0;
}