#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100
int main(void) { 

  srand(time(NULL));
  int vetor[TAM], i, k, minIndex, troca, tamanho, caso;

  for (i = 0; i < 100; i++) {
    vetor[i] = rand() % 101;
    printf("\t%d\n", vetor[i]);
  }

  //bubble sort
  tamanho = sizeof(vetor) / sizeof(vetor[0]);

  puts("Como voce deseja ordenar?");
  puts("[1] - bubble sort");
  puts("[2] - selection sort");
  scanf("%d", &caso);

  switch (caso)
  {
  case 1:
    puts("Bubble sort:");

    do {//bubble sort um pouco mais eficiente 
      i = 0;
      for (int j = 0; j < tamanho - i - 1; j++) { 
        if (vetor[j] > vetor[j + 1]) {
          troca = vetor[j];
          vetor[j] = vetor[j + 1];
          vetor[j + 1] = troca;
          i = 1;
        }
      }
    } while(i);

    puts("Resultado:");

    for(i = 0; i < tamanho; i++) {
      printf("\t%d\n", vetor[i]);
    }
  break;

  case 2:
  puts("Selection sort:");
    for (int i = 0; i < tamanho - 1; i++) {

      minIndex = i;

        for (k = i + 1; k < tamanho; k++) {
          if (vetor[k] < vetor[minIndex]) {
            minIndex = k;
          }
        }   

      troca = vetor[i];
      vetor[i] = vetor[minIndex];
      vetor[minIndex] = troca;
    }

    puts("Resultado: ");
    for(i = 0; i < tamanho; i++) {
      printf("\t%d\n", vetor[i]);
    }
  break;

  default:
    puts("Opcao invalida.");
    break;
  }


  return 0;
}