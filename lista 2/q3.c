#include <stdio.h>

int main(void) {

  int numeroDigitado, resultado;
  puts("Digite um numero:");
  scanf("%d", &numeroDigitado);

  if(numeroDigitado == 0 || numeroDigitado == 1) {
  printf("Você digitou o numero %d, e o fatorial dele e: %d", numeroDigitado, 1);
  }

  for(resultado = 1; numeroDigitado > 1; numeroDigitado--) {

    resultado *= numeroDigitado;

  }

  printf("Voce digitou o numero %d, e o fatorial dele e: %d", numeroDigitado, resultado);


  return 0;
}