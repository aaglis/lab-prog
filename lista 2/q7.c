#include <stdio.h>

int main(void) {

  int primeiroNumero, segundoNumero;
  float resultado;

  for(;;) {

    puts("Digite o primeiro numero:");
    scanf("%d", &primeiroNumero);

    puts("Digite o segundo numero:");
    scanf("%d", &segundoNumero);

    if(segundoNumero == 0){
      puts("O divisor nao pode ser nulo. tente novamente.");
    }
    else {
      resultado = (float)primeiroNumero / segundoNumero;
      printf("O resultado da divisao de %d por %d e:\n", primeiroNumero, segundoNumero);
      printf("\t%.2f\n", resultado);
    }
  }



  return 0; 
