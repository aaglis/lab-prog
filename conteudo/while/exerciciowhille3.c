#include <stdio.h>

int main()
{
  int resultado;
  int contador = 1;

  while(contador <= 10) {
    int multiplicador = 1;

    while (multiplicador <= 10) {
      resultado = contador * multiplicador;
      printf("%d x %d = %d\n", contador, multiplicador, resultado);
      multiplicador++;
    }

    contador++;
    printf("\n");
  }
  return 0;
}

