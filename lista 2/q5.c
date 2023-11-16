#include <stdio.h>

int main(void) {

  int numeroDigitado, maiorNumero = 0, menorNumero = 0;

  puts("Digite um valor inteiro: ");
  scanf("%d", &numeroDigitado);

  maiorNumero = numeroDigitado;
  menorNumero = numeroDigitado;

  for(;;) {
    if(numeroDigitado > maiorNumero){
      maiorNumero = numeroDigitado;
    }
    if(numeroDigitado < menorNumero) {
      menorNumero = numeroDigitado;
    }

    printf("O maior valor digitado e %d e o menor termo digitado e %d\n", maiorNumero, menorNumero);
    puts("Digite outro valor inteiro(digite 0 para encerrar):");
    scanf("%d", &numeroDigitado);

    if(numeroDigitado == 0) {
      puts("Programa encerrado.");
      break;
    }
  }

  return 0;
}