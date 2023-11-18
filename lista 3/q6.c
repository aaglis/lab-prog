#include <stdio.h>
#include <string.h>
#define TAM 50

int main(void)
{

  int i;
  char string[TAM];

  printf("Digite uma string: ");
  fgets(string, TAM, stdin);

  i = strlen(string);

  printf("Voce digitou a string: %s", string);
  printf("Sua forma inversa:");
  while (i >= 0)
  {

    printf("%c", string[i]);
    i--;
  }

  return 0;
}