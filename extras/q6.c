#include <stdio.h>
#define TAM 10

void imprimirNumeros();

int main(void) {
  
  imprimirNumeros();
  
  return 0;
}

void imprimirNumeros() {
  for(int i = 0; i < TAM; i++) {
    printf("%d\n", i + 1);
  }
}