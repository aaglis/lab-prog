// media da quantidade de notas que o usuario informar
#include <stdio.h>

int main(void) {

  int qntdNotas, i, somatorio;
  float resultado;

  somatorio = 0;

  puts("Digite quantas notas serao digitadas: ");
  scanf("%d", &qntdNotas);

  int vetor[qntdNotas];//declaracao do vetor

  //receber as notas + somatorio
  for (i = 0; i <= qntdNotas - 1; i++){
    printf("Digite a %d nota:", i + 1);
    scanf("%d", &vetor[i]);
    somatorio += vetor[i];
  }

  resultado = somatorio / qntdNotas;

  printf("a media das %d notas e: %.2f !", qntdNotas, resultado);
  
  return 0;
}