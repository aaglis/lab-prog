#include <stdio.h>

int main(void)
{

  int somador1 = 0, somador2 = 0;

  for (int i = 0; i <= 100; i++)
  {
    if (i % 3 == 0)
    {
      somador1 += i;
    }

    if ((100 + i) % 5 == 0)
    {
      somador2 += 100 + i;
    }
  }

  printf("somatorio de todos os numeros divisiveis por 3 entre 0 e 100: %d\n", somador1);
  printf("somatorio de todos os numeros divisiveis por 5 entre 100 e 200: %d\n", somador2);

  return 0;
}