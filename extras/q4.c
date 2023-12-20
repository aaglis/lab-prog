//receba um número e diga se ele é par ou não
#include <stdio.h>
#include <stdlib.h>

void ePar(int num);

int main(int argc, char *argv[]) {

  if(argc != 2){
    printf("Uso: %s <número>\n", argv[0]);
    return 1;
  }

  int num = atoi(argv[1]);
  ePar(num);
  
  return 0;
}

void ePar(int num) {

  if(num % 2 == 0){
    printf("o numero %d é par\n", num);
  }
  else {
    printf("o numero %d é impar\n", num);
  }
    
}