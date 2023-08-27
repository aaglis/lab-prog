#include <stdio.h>

int main (void) {

  int primeiroNumero, segundoNumero;
  float divisao;

  printf("Digite o primeiro numero: ");
  scanf("%d", &primeiroNumero);
  printf("Digite o segundo numero: ");
  scanf("%d", &segundoNumero);

  divisao = primeiroNumero / segundoNumero;

  printf("A soma entre os dois numeros e: %d\n", primeiroNumero + segundoNumero);
  printf("O produto entre os dois numeros e: %d\n", primeiroNumero * segundoNumero);
  printf("A diferenca entre os dois numeros e: %d\n", primeiroNumero - segundoNumero);
  printf("O quociente entre os dois numeros e: %.2f\n", divisao);
  printf("O resto entre os dois numeros e: %d\n", primeiroNumero % segundoNumero);


  return 0;
}