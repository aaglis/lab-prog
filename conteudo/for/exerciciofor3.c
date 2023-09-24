// fazer a tabuada do numero que o usuario digitar entre 1 e 10
#include <stdio.h>

int main(void)
{

  int multiplicacao, numeroDigitado, i;

  puts("Digite um numero inteiro entre 1 e 10: ");
  scanf("%d", &numeroDigitado);

  if (numeroDigitado < 1 || numeroDigitado > 10)
  {
    puts("numero invalido. tente novamente.");
  }
  else
  {
    for (i = 1; i <= 10; i++)
    {
      multiplicacao = numeroDigitado * i;
      printf("\t%d x %d = %d\n", numeroDigitado, i, multiplicacao);
    }
  }

  return 0;
}