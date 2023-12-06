#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAIN_TAM 5
#define CONTENT_TAM 3
#define SEC_TAM 2

void zerarMatriz(int matriz[MAIN_TAM][MAIN_TAM]);
void gerarMatrizAleatoria(int matriz[MAIN_TAM][MAIN_TAM]);
void imprimirMatriz(int matriz[MAIN_TAM][MAIN_TAM]);
int somatorioRegioes(int matriz[MAIN_TAM][MAIN_TAM], int somatorio, int *ponteiroI, int *ponteiroK);

int main(void)
{
  srand(time(NULL));

  int matrizPrincipal[MAIN_TAM][MAIN_TAM];

  int i = 0, k = 0;
  int *ponteiroI, *ponteiroK;

  ponteiroI = &i;
  ponteiroK = &k;

  int somatorio = 0;

  zerarMatriz(matrizPrincipal);

  gerarMatrizAleatoria(matrizPrincipal);
  imprimirMatriz(matrizPrincipal);
  somatorioRegioes(matrizPrincipal, somatorio);

  return 0;
}

void zerarMatriz(int matriz[MAIN_TAM][MAIN_TAM])
{
  for (int i = 0; i < MAIN_TAM; i++)
  {
    for (int k = 0; k < MAIN_TAM; k++)
    {
      matriz[i][k] = 0;
    }
  }
}

void gerarMatrizAleatoria(int matriz[MAIN_TAM][MAIN_TAM])
{
  for (int i = 1; i <= 3; i++)
  {

    for (int k = 1; k <= 3; k++)
    {
      matriz[i][k] = rand() % 50;
    }
  }
}

void imprimirMatriz(int matriz[MAIN_TAM][MAIN_TAM])
{
  int i, k;

  for (i = 0; i < MAIN_TAM; i++)
  {

    for (k = 0; k < MAIN_TAM; k++)
    {
      printf("\t%d", matriz[i][k]);
    }
    puts("");
  }
}

int somatorioRegioes(int matriz[MAIN_TAM][MAIN_TAM], int somatorio, int *ponteiroI, int *ponteiroK) {

  for (int l = 0; l < SEC_TAM; l++) {
    for (int m = 0; m < SEC_TAM; m++) {
      somatorio += matriz[l][m];
    }
  }
  printf("\n %d", somatorio);
  return somatorio;
}