#include <stdio.h>

int main (void) {

  char texto[20];

  puts("Digite um texto:");
  fgets(texto, 20, stdin);
  fflush(stdin);

  puts("Resultado:");
  puts(texto);

  return 0;
}