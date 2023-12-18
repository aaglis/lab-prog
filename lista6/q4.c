#include <stdio.h>
#define TAM 50

struct aluno {
  int nota1, nota2, somatorio;
  float media;
  char nome[TAM];
};

void infoAluno(struct aluno *aluno);
void calcularMediaAluno(struct aluno *aluno);
void mostrarDados(struct aluno *aluno);

int main(void) {

  struct aluno alunos[3];
  int i, k;
  for (i = 0; i < 3; i++) {
    printf("%do aluno:\n", i + 1);
    infoAluno(&alunos[i]);
  }
  puts("DADOS:");
  for (k = 0; k < 3; k++) {
    calcularMediaAluno(&alunos[k]);
    mostrarDados(&alunos[k]);
  }

  return 0;
}

void infoAluno(struct aluno *aluno) {
  printf("Nome: ");
  fgets(aluno->nome, TAM, stdin);

  printf("Nota 1: ");
  scanf("%d", &aluno->nota1);

  printf("Nota 2: ");
  scanf("%d", &aluno->nota2);
  getchar();
}

void calcularMediaAluno(struct aluno *aluno) {
  aluno->somatorio = aluno->nota1 + aluno->nota2;
  aluno->media = (float)aluno->somatorio / 2;
}

void mostrarDados(struct aluno *aluno) {
  puts("========================");
  printf("Nome: %s", aluno->nome);
  printf("Nota 1: %d\n", aluno->nota1);
  printf("Nota 2: %d\n", aluno->nota2);
  printf("Média: %.2f\n", aluno->media);
}
