#include <stdio.h>
#include <string.h>
#define TAM 50

int main(void)
{

  char string1[TAM];
  char string2[TAM];
  unsigned int i = 0, j = 0;

  printf("Digite uma string: ");
  fgets(string1, TAM, stdin);
  printf("Digite outra string: ");
  fgets(string2, TAM, stdin);

  while (string1[i] != '\n')
  {

    if (string1[i] == string2[i])
    {
      i++;
    }

    j++;
  }

  puts("Sem usar strcmp: ");
  if (i == j)
  {
    puts("\tAs strings sao iguais.");
  }
  else
  {
    puts("\tAs strings nao sao iguais");
  }

  puts("Usando strcmp:");

  strcmp(string1, string2) ? printf("\tAs strings nao sao iguais\n") : printf("\tAs strings sao iguais");

  return 0;
}