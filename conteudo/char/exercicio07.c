#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{

  char texto[50];
  const char vogais[] = "aeiou";
  int i = 0, j = 0, tamanho;

  puts("Digite um texto que voce desejar:");
  fgets(texto, 50, stdin);

  if (isspace(texto[0]))
  {

    while (isspace(texto[i]))
    {
      i++;
    }
    while (texto[j] != '\0')
    {
      texto[j] = texto[i];
      i++;
      j++;
    }
    texto[j] = '\0';
  }

  tamanho = strlen(texto);

  // retira as vogais que estao na string
  for (i = 0; i < tamanho; i++)
  {

    for (j = 0; j <= 5; j++)
    {
      if (tolower(texto[i]) == vogais[j])
      {
        texto[i] = ' ';
      }
    }
  }

  printf("sua string(sem vogais e com espacos): %s", texto);

  // retira os espaços que estão no meio de uma string
  j = 0;
  for (i = 0; texto[i] != '\0'; i++)
  {
    if (texto[i] != ' ' && texto[i] != '\t')
    {
      texto[j] = texto[i];
      j++;
    }
  }

  texto[j] = '\0';

  printf("sua string(sem vogais e sem espacos): %s", texto);

  return 0;
}