#include <stdio.h>
int main(void) {

  int numeroDigitado;

  puts("Digite um numero entre 1 e 7 (pressione 0 para encerrar o programa): ");
  scanf("%d", &numeroDigitado);

  while(numeroDigitado) {
    switch (numeroDigitado) {
      case 1:
      printf("Domingo\n");
      break;
      
      case 2:
      printf("Segunda\n");
      break;

      case 3:
      printf("Terca\n");
      break;

      case 4:
      printf("Quarta\n");
      break;
      
      case 5:
      printf("Quinta\n");
      break;
      
      case 6:
      printf("Sexta\n");
      break;

      case 7:
      printf("Sabado\n");
      break;

      default:
      printf("Numero de dia nao valido.\n");
      break;
    }

    puts("Digite um numero entre 1 e 7 (pressione 0 para encerrar o programa): ");
    scanf("%d", &numeroDigitado);
  }
  return 0;
}