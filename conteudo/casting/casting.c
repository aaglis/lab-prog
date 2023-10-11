#include <stdio.h>

int main(void)
{

  int contador, numero;
  double resultado;

  numero = 256;

  for (contador = 0; contador <= numero; contador++)
  {

    // resultado = contador / numero * 100.0
    // double--------int-------int--

    resultado = (double)contador / numero * 100.0;
    // double----------------double-----int--
    // double---------------------double-----
    printf("%.2f\n", resultado);
  }

  return 0;
}