#include <stdio.h>

int main(void) {

  int i, t, fatorial = 1;

  for(i = 1; i <= 10; i ++) {

    if(i % 2) {
      fatorial = 1;
      for(t =1; t <= i; t++) {
        fatorial *= t;
      }
      printf("\t%d e impar, e seu fatorial e %d\n", i, fatorial);
    }
  }


  return 0;
}