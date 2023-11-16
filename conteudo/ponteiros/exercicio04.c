// alterando o valor de uma variavel, usando ponteiros dentro de uma função

#include <stdio.h>

void funcaoInteiro(int x);
void funcaoPonteiro(int *ponteiro);

int main(void) {

  int numero = 10;
  int *ponteiroNumero;
  ponteiroNumero = &numero;

  //funcaoInteiro(numero);
  funcaoPonteiro(ponteiroNumero);
  printf("%d", numero);
  return 0;
}


void funcaoInteiro(int x) {
  x++;
}

void funcaoPonteiro(int *ponteiro) {
 ++*ponteiro;
}