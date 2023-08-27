#include <stdio.h>

int main(void) {
  float comprimento, largura, altura, volume;

  printf("Digite o comprimento: ");
  scanf("%f", &comprimento);

  printf("Digite a largura: ");
  scanf("%f", &largura);

  printf("Digite a altura: ");
  scanf("%f", &altura);

  volume = comprimento * altura * altura;

  printf("O volume e: %.2f", volume);

  return 0;
}