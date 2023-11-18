// imprimir todos os dados de uma matriz
#include <stdio.h>

int main(void)
{

  int matriz[3][3] = {{1, 2, 3}, {3, 2, 1}, {6, 7, 3}}; // ou  {1, 2, 3, 3, 2, 1, 6, 7, 3};

  for (int i = 0; i < 3; i++)
  {

    for (int k = 0; k < 3; k++)
    {
      printf("\t%1d", matriz[i][k]);
    }
    puts("");
  }

  return 0;
}