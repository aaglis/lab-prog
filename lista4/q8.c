#include <stdio.h>
#define TAM 50

int procurarCaractere(char *string, char caractere, int contador);

int main(void)
{

  int contador = 0;

  char string[TAM], caractere;

  printf("Digite sua string: ");
  fgets(string, TAM, stdin);
  fflush(stdin);

  printf("Digite o caractere que deseja procurar na string: ");
  scanf("%c", &caractere);

  contador = procurarCaractere(string, caractere, contador);

  if (contador == 0)
  {
    printf("O caractere %c não aparece na string digitada.", caractere);
  }
  else
  {
    printf("O caractere %c aparece %d vezes na string digitada.", caractere, contador);
  }

  return 0;
}

int procurarCaractere(char *string, char caractere, int contador)
{

  char *pString = string;

  while (*pString != '\n')
  {

    if (*pString == caractere)
    {
      contador++;
    }

    pString++;
  }

  return contador;
}