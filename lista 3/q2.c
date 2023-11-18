#include <stdio.h>
#define TAM 50

int main(void)
{

  int contadorCaractere = 0;
  char string[TAM], caractere;

  printf("Digite um texto: ");
  fgets(string, TAM, stdin);

  printf("Digite o caractere: ");
  scanf("%c", &caractere);

  for (int i = 0; string[i] != '\0'; i++)
  {
    if (string[i] == caractere)
    {
      contadorCaractere++;
    }
  }

  if (contadorCaractere > 0)
  {
    printf("\n\tO caractere (%c) aparece %d vezes no seu texto!\n", caractere, contadorCaractere);
  }
  else
  {
    printf("\n\tSeu texto nao tem o caractere %c.\n", caractere);
  }

  return 0;
}