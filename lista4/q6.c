#include <stdio.h>
#include <string.h>
#define TAM 50

void transferirString(char *stringMain, char *stringCopy);

int main(void)
{

  char string[TAM];
  char stringCopy[TAM];

  printf("Digite sua string: ");
  fgets(string, TAM, stdin);

  transferirString(string, stringCopy);

  printf("String que voce digitou:\n\t%s\n", string);
  printf("Sua string copiada:\n\t%s\n", stringCopy);

  printf("qntd de caracteres: %d\n", strlen(string));
  printf("qntd de caracteres: %d\n", strlen(stringCopy));

  return 0;
}

void transferirString(char *stringMain, char *stringCopy)
{

  char *pStringMain, *pStringCopy;

  pStringMain = stringMain;
  pStringCopy = stringCopy;

  while (*pStringMain != '\0')
  {

    *pStringCopy = *pStringMain;

    pStringMain++;
    pStringCopy++;
  }

  *pStringCopy = '\0';
}