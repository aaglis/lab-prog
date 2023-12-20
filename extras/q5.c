//receba dois numeros e informe qual o maior entre eles

#include <stdio.h>
#include <stdlib.h>

void maiorNumero(int num1, int num2);

int main(int argc, char *argv[]) {

  if(argc != 3) {
    printf("Uso: %s <numero1> <numero2>\n", argv[0]);
    return 1;
  }

  int num1 = atoi(argv[1]);
  int num2 = atoi(argv[2]);

  maiorNumero(num1, num2);
  
  return 0;
}

void maiorNumero(int num1, int num2) {
  if(num1 > num2) {
    printf("maior numero: %d\n", num1);
  }
  else {
    printf("maior numero: %d\n", num2);
  }
}
