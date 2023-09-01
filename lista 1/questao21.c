#include <stdio.h>

int main(void) {

  int numero1, numero2;

  printf("Digite o primeiro numero: ");
  scanf("%d", &numero1);
  printf("Digite o segundo numero: ");
  scanf("%d", &numero2);

  !(numero1 % numero1) ? printf("%d e multiplo de %d!\n", numero1, numero2) : printf("%d não e multiplo de %d!\n", numero1, numero2);

  return 0;
}