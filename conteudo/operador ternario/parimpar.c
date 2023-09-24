#include <stdio.h>

int main(void) {

  int numero;

  printf("digite um numero: ");
  scanf("%d", &numero);

  numero % 2 == 0 ? printf("e par!") : printf("e impar!");

  return 0;
}