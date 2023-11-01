// informe o fatorial do numero atraves de uma função recursiva

#include <stdio.h>

int numeroFatorial(int x);

int main(void)
{

  int numeroDigitado, resultado;

  puts("Digite um numero, que voce deseja saber o fatorial: ");
  scanf("%d", &numeroDigitado);

  resultado = numeroFatorial(numeroDigitado);

  printf("o fatorial do numero %d e: %d.", numeroDigitado, resultado);

  return 0;
}

int numeroFatorial(int x)
{
  int resultado;
  if (x == 0)
  {
    resultado = 1;
  }
  else
  {
    resultado = x * numeroFatorial(x - 1);
  }

  return resultado;
}