#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void adicionarRandom(int *num1, int *num2);

int main(int argc, char *argv[]) {
  srand(time(NULL));

  if(argc != 3) {
    printf("Uso: %s <numero> <numero>\n", argv[0]);
    return 1;
  }

  int num1 = atoi(argv[1]);
  int num2 = atoi(argv[2]);

  printf("Numeros atuais: %d e %d\n", num1, num2);

  adicionarRandom(&num1, &num2);

  printf("Numeros novos: %d e %d\n", num1, num2);
  
}

void adicionarRandom(int *num1, int *num2) {
  *num1 = rand() & 100;
  *num2 = rand() & 100;
}