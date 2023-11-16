#include <stdio.h>

int main(void) {

  int a, b, c;
  printf("Todas as trilpas de pitagoras inteiras entre 1 e 500:\n");
  for (a = 1; a <= 500; a++) {

    for(b = 1; b <= 500; b++) {

      for(c = 1; c <= 500; c++){

        if((a * a) + (b * b) == (c*c)) {

          printf("\t%d, %d e %d\n", a, b, c);  

        }

      }

    }

  }

  return 0;
}