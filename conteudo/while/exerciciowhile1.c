#include <stdio.h>

int main() {

  int numero, i;

  i = 0;

  printf("digite um numero: ");
  scanf("%d", &numero);

  while (i <= numero) {
    printf("%d\n", i);
    i++;
  }

  return 0;
}