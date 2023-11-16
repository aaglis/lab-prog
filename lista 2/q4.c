#include <stdio.h>

int main(void)
{

  int jose, contador, pedro;
  contador = 0;
  jose = 150;
  pedro = 110;

  while (jose >= pedro)
  {
    jose += 2;
    pedro += 3;
    contador++;
  }

  printf("Em %d anos, Pedro sera maior que jose!", contador);

  return 0;
}