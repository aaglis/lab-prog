#include <stdio.h>
#include <string.h>

int main(void)
{

  char texto1[20] = {"Meu nome e "};
  char texto2[20] = {"Aglis!"};

  puts("Antes do strcat: ");
  puts(texto1);
  puts(texto2);

  strcat(texto1, texto2);

  puts("depois do strcat: ");
  puts(texto1);
  puts(texto2);
  return 0;
}