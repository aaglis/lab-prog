//escreva um código que mostre se um número é par ou impar.
#include <stdio.h>
#include <stdlib.h>

void dobrarNumero(int num);

int main(int argc, char *argv[]) {

  if (argc != 2) {
    printf("<./nomeDoExecutavel> <numero inteiro>");
    return 1;
  }

  int numeroDigitado = atoi(argv[1]);
  dobrarNumero(numeroDigitado);

  return 0;
}

void dobrarNumero(int num) {
  printf("Numero digitado: %d\n", num);
  printf("Numero digitado dobrado: %d\n", num * 2);
}