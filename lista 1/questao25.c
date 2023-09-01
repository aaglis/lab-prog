#include <stdio.h>

int main() {
    
  int tempoDigitado, horas, minutos, segundos;

  printf("Entre com o tempo em segundos: ");
  scanf("%d", &tempoDigitado);

  horas = tempoDigitado / 3600; // horas
  segundos = tempoDigitado % 3600; // retira as horas
  minutos = segundos / 60; // minutos
  segundos = segundos % 60; // retira os minutos

  printf("Voce digitou: %d segundos!\n", tempoDigitado);
  printf("Tempo convertido:\n %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

  return 0;
}
