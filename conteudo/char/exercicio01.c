#include <stdio.h>

int main(void) {

  char texto[20];

  puts("Digite seu nome:");
  scanf("%19[^\n]s", texto);
  fflush(stdin);

  printf("Resultado: %s\n", texto);
  return 0;
}