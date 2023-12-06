#include <stdio.h>
#define TAM 50

void concatenarStrings(char * string1, char *string2, char *stringConcatenada);

int main(void) {

  char string1[TAM], string2[TAM], stringConcatenada[TAM];

  printf("Digite sua primeira string: ");
  fgets(string1, TAM, stdin);
  fflush(stdin);

  printf("Digite sua segunda string: ");
  fgets(string2, TAM, stdin);
  fflush(stdin);

  concatenarStrings(string1, string2, stringConcatenada);

  printf("Sua string concatenada: %s", stringConcatenada);

  return 0;
}

void concatenarStrings(char * string1, char *string2, char *stringConcatenada) {
  char *pString1, *pString2, *pStringConcatenada;

  pString1 = string1;
  pString2 = string2;
  pStringConcatenada = stringConcatenada;

  while(*pString1 != '\n') {
    *pStringConcatenada = *pString1;

    pString1++;
    pStringConcatenada++;
  }

  while(*pString2 != '\0') {
    *pStringConcatenada = *pString2;

    pString2++;
    pStringConcatenada++;
  }

  *pStringConcatenada = '\0';
}