#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REGISTROS 100
#define TAM_NOME 50

struct Ferramenta {
  int registro;
  char nome[TAM_NOME];
  int quantidade;
  float custo;
};

void listarFerramentas(const char *nomeArquivo);
void inicializarArquivo(const char *nomeArquivo);
void inserirFerramenta(const char *nomeArquivo, int registro, const char *nome, int quantidade, float custo);
void excluirFerramenta(const char *nomeArquivo, int registro);

int main() {
  const char *nomeArquivo = "hardware.dat";
  inicializarArquivo(nomeArquivo);

  inserirFerramenta(nomeArquivo, 1, "Martelo", 10, 15.50);
  inserirFerramenta(nomeArquivo, 2, "Chave de Fenda", 20, 8.75);
  inserirFerramenta(nomeArquivo, 3, "Serra Circular", 5, 120.0);

  printf("Lista de Ferramentas:\n");
  listarFerramentas(nomeArquivo);

  excluirFerramenta(nomeArquivo, 2);

  printf("\nLista de Ferramentas após Exclusão:\n");
  listarFerramentas(nomeArquivo);

  return 0;
}

void inicializarArquivo(const char *nomeArquivo) {
  FILE *arquivo = fopen(nomeArquivo, "wb");
  if (arquivo == NULL) {
    perror("Erro ao abrir o arquivo");
    exit(EXIT_FAILURE);
  }

  struct Ferramenta ferramentaVazia = {0, "", 0, 0.0};
  for (int i = 0; i < MAX_REGISTROS; i++) {
    fwrite(&ferramentaVazia, sizeof(struct Ferramenta), 1, arquivo);
  }

  fclose(arquivo);
}

void listarFerramentas(const char *nomeArquivo) {
  FILE *arquivo = fopen(nomeArquivo, "rb");
  if (arquivo == NULL) {
    perror("Erro ao abrir o arquivo");
    exit(EXIT_FAILURE);
  }

  struct Ferramenta ferramenta;

  printf("%-10s%-30s%-12s%s\n", "Registro", "Nome da Ferramenta", "Quantidade", "Custo");

  while (fread(&ferramenta, sizeof(struct Ferramenta), 1, arquivo) == 1) {
    if (ferramenta.registro != 0) {
      printf("%-10d%-30s%-12d%.2f\n", ferramenta.registro, ferramenta.nome, ferramenta.quantidade, ferramenta.custo);
    }
  }

  fclose(arquivo);
}

void inserirFerramenta(const char *nomeArquivo, int registro, const char *nome, int quantidade, float custo) {
  FILE *arquivo = fopen(nomeArquivo, "rb+");
  if (arquivo == NULL) {
    perror("Erro ao abrir o arquivo");
    exit(EXIT_FAILURE);
  }

  struct Ferramenta ferramenta;
  ferramenta.registro = registro;
  strncpy(ferramenta.nome, nome, TAM_NOME - 1);
  ferramenta.nome[TAM_NOME - 1] = '\0';
  ferramenta.quantidade = quantidade;
  ferramenta.custo = custo;

  fseek(arquivo, (registro - 1) * sizeof(struct Ferramenta), SEEK_SET);
  fwrite(&ferramenta, sizeof(struct Ferramenta), 1, arquivo);

  fclose(arquivo);
}

void excluirFerramenta(const char *nomeArquivo, int registro) {
  FILE *arquivo = fopen(nomeArquivo, "rb+");
  if (arquivo == NULL) {
    perror("Erro ao abrir o arquivo");
    exit(EXIT_FAILURE);
  }

  struct Ferramenta ferramentaVazia = {0, "", 0, 0.0};
  fseek(arquivo, (registro - 1) * sizeof(struct Ferramenta), SEEK_SET);
  fwrite(&ferramentaVazia, sizeof(struct Ferramenta), 1, arquivo);

  fclose(arquivo);
}