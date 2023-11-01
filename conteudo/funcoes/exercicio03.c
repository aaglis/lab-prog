//recebe um valor e retorna se ele é positivo ou não
#include <stdio.h>

void positivoOuNegativo(int numeroDigitado); // declaro a funcao em cima

int main(void) {

  int numeroDigitado;
  puts("Digite um numero: ");
  scanf("%d", &numeroDigitado);

  positivoOuNegativo(numeroDigitado); // inicio a funcao, passando o numero digitado pelo usuario

  return 0;
}

void positivoOuNegativo(int numeroDigitado) {
  //verificação se é positivo ou negativo
  if(numeroDigitado > 0 )
    printf("%d e um numero positivo!", numeroDigitado);
  else 
    printf("%d e um numero negativo!", numeroDigitado);
}
