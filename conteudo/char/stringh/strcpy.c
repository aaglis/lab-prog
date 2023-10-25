#include <stdio.h>
#include <string.h> // necessário

int main(void) {

  char texto1 [20] = {"Meu nome e Aglis!"};
  char texto2[20];

  puts("Antes do strcpy: ");
  puts(texto1);
  puts(texto2);

  strcpy(texto2, texto1); //strcpy
  
  puts("Depois do strcpy: ");
  puts(texto1);
  puts(texto2);

  return 0;
}