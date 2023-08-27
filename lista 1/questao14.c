#include <stdio.h>

int main(void)
{

  float tempC, tempF;

  printf("Digite a temperatura(em celsius): ");
  scanf("%f", &tempC);

  tempF = (9 * tempC + 160) / 5;

  printf("A temperatura, convertida para fahrenheit e: %.2f\n", tempF);
  return 0;
}