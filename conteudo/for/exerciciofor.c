#include <stdio.h>

int main(void)
{

  int contador, i;

  puts("Digite um numero: ");
  scanf("%d", &contador);

  for (i = 0; i <= contador; i++)
  {
    printf("%d\n", i);
  }

  return 0;
}