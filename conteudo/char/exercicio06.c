#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{

  char texto[50];
  int i = 0, j = 0, tamanho;

  puts("Digite o texto que voce deseja:");
  fgets(texto, 50, stdin); // recebe o texto digitado

  // verifica se string tem espaços
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

  printf("Seu texto ao contrario:");
  for (j = tamanho; j >= 0; j--)
  {
    printf("%c", texto[j]);
  }
  printf("\nfim.");
  return 0;
}