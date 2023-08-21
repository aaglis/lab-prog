#include <stdio.h>

int main(void)
{

  int horas, minutos, segundos, totalDeSegundos;

  printf("Digite a quantidade de horas: \n");
  scanf("%d", &horas);
  printf("Digite a quantidade de minutos: \n");
  scanf("%d", &minutos);
  printf("Digite a quantidade de segundos: \n");
  scanf("%d", &segundos);

  totalDeSegundos = horas * 3600 + minutos * 60 + segundos;

  printf("dentro de %d horas, %d minutos e %d segundos, tem: %d segundos!", horas, minutos, segundos, totalDeSegundos);

  return 0;
}