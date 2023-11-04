// alterando os valores de uma estrutura com ponteiros

#include <stdio.h>

struct valores {

  int primeiroValor;
  int segundoValor;
};

int main(void) {

  struct valores numeros, *alterarValor; // criei uma struct com o nome <numeros>(do tipo valores) e um ponteiro <alterarValor>
  alterarValor = &numeros;

  numeros.primeiroValor = 10;
  numeros.segundoValor = 90;

  printf("numeros Atuais: %d e %d\n", numeros.primeiroValor, numeros.segundoValor);

  alterarValor -> primeiroValor = 21; //(*alterarValor).primeiroValor = 21;
  alterarValor -> segundoValor = 43;//(*alterarValor).segundoValor = 43;

  printf("valores alterados atraves do ponteiro: %d e %d\n", numeros.primeiroValor, numeros.segundoValor);
  return 0;
}