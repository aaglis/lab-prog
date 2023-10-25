//
#include <stdio.h>

int main(void) {

  char texto[50];

  puts("Digite o seu nome:");
  gets(texto);

  printf("Seu nome e: %s\n", texto);

  return 0;
}