// mostre a qntd de caracteres da string, sem usar strlen
#include <stdio.h>
int calcularComprimentoString(const char str[])
{
  int comprimento = 0;

  while (str[comprimento] != '\0')
  {
    comprimento++;
  }

  return comprimento;
}

int main()
{
  const char minhaString[] = "Teste";

  int comprimento = calcularComprimentoString(minhaString);

  printf("O comprimento da string e: %d\n", comprimento);

  return 0;
}
