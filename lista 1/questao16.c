#include <stdio.h>

int main(void) {

  float valorBruto, valorLiquido, valorHora, valorPercentual, numeroPercentual, horasTrabalhadas;

  printf("Digite a quantidade de horas que voce trabalhou nesse mes: ");
  scanf("%f", &horasTrabalhadas);

  printf("Digite o valor da hora da sua aula: ");
  scanf("%f", &valorHora);

  printf("Digite o percentual de desconto do INSS: ");
  scanf("%f", &numeroPercentual);


  valorBruto = horasTrabalhadas * valorHora;

  valorPercentual = (numeroPercentual / 100) * valorBruto;

  valorLiquido = valorBruto - valorPercentual;


  printf("Seu salario bruto: %.2f\n", valorBruto);
  printf("Seu salario liquido: %.2f\n", valorLiquido);


  return 0;
}