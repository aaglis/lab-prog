#include <stdio.h>
#define TAM 20

int main(void)
{

  int i, primeiroNumero, numeroAnterior, proxSequencia;

  primeiroNumero = 1;
  numeroAnterior = 0;
  proxSequencia = 0;

  for (i = 0; i < 20; i++)
  {

    proxSequencia = primeiroNumero + numeroAnterior;
    numeroAnterior = primeiroNumero;
    primeiroNumero = proxSequencia;

    printf("%d ", proxSequencia);
    return 0;
  }
}