#include <stdio.h>

int main(void)
{
  double graos = 1, totalGraos = 0;
  int i;

  for (i = graos; i <= 64; i++)
  {
    graos = graos * 2;
    totalGraos += graos;

    printf("\t%do Quadrado: %.0lf graos\n", i, graos);
    printf("\tTotal de graos: %.0lf\n", totalGraos);
  }

  return 0;
}