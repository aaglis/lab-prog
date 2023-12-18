#include <stdio.h>
#define TAM 50

struct aluno {
  int nota1, nota2;
  char nome[TAM];
};

int main(void) {

  struct aluno aluno1;
  int soma;
  float resultado;
  printf("Digite seu nome: ");
  fgets(aluno1.nome, TAM, stdin);

  printf("Digite sua primeira nota: ");
  scanf("%d", &aluno1.nota1);

  printf("Digite sua segunda nota: ");
  scanf("%d", &aluno1.nota2);

  soma = aluno1.nota1 + aluno1.nota2;
  resultado = (float)soma /2;

  printf("Seu nome: %s", aluno1.nome);
  printf("Sua media:\n\t%.2f\n", resultado);

  return 0;
}