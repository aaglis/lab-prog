#include <stdio.h>

int main(void) {

  int inicio;

  puts("Numeros multiplos de 4 entre 15 e 90(e seus quadrados):");

  for (inicio = 15; inicio <= 90; inicio++){
      if (inicio % 4 == 0) {
        printf("\t%d\t%d\n", inicio, inicio*inicio);
      }
  }

  return 0;
}