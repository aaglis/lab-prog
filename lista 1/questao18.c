#include <stdio.h>

int main(void)
{

  float raio, diametro, circunferencia, area, pi;

  pi = 3.14159;

  printf("Digite o valor do raio: ");
  scanf("%f", &raio);

  diametro = 2 * raio;

  circunferencia = 2 * pi * raio;

  area = pi * (raio * raio);

  printf("Voce digitou o valor do raio: %.2f\n", raio);
  printf("Seu diametro: %.2f\nSua circunferencia: %.2f\nSua area: %.2f\n", diametro, circunferencia, area);

  return 0;
}