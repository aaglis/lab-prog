#include <stdio.h>
#include <string.h>
#define TAM 50

int main(void)
{

  char string1[TAM];
  char string2[TAM];
  unsigned int tamConcatenar, i, j;

  printf("Digite a primeira string: ");
  fgets(string1, TAM, stdin);
  fflush(stdin);

  printf("Digite a segunda string: ");
  fgets(string2, TAM, stdin);
  fflush(stdin);

  tamConcatenar = strlen(string1) + strlen(string2);

  char stringConcatenada[tamConcatenar]; // nova string que tem o tamanho para aportar as duas strings digitadas

  for (i = 0; string1[i] != '\n'; i++)
  {
    stringConcatenada[i] = string1[i];
  }

  string1[i] = '\0'; // reitira a quebra de linha, para quando for usar o strcat

  for (j = 0; string2[j] != '\n'; j++)
  {
    stringConcatenada[i] = string2[j];
    i++;
  }

  stringConcatenada[i + 1] = '\0';

  puts("Sem usar strcat:");
  printf("\t%s\n", stringConcatenada);

  strcat(string1, string2);

  puts("Usando strcat: ");
  printf("\t%s\n", string1);
  return 0;
}