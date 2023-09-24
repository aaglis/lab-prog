// todos os numeros pares entre 1 e 100 usando
// a estrutura de repetição FOR
#include <stdio.h>

int main(void) {

  int contador;

  for (contador = 1; contador <= 100; contador++) {

    if(contador % 2 == 0){
      printf("%d\n", contador);
    }
  }

  return 0;
}