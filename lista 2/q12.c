#include <stdio.h>

int main(void) {

  int numeroDigitado, i;

  puts("Digite um numero: ");
  scanf("%d", &numeroDigitado);

  printf("Tabuada do numero %d:\n\n", numeroDigitado);

  for (i = 1; i <= 10; i++) {

    printf("\t%d x %d = %d\n", numeroDigitado, i, numeroDigitado * i);

  }


  return 0;
}