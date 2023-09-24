#include <stdio.h>

int main(void) {

  int i, contador, condicao;
  float mediaDigitada, medias, resultadoMedia;

  for(;;) {

    mediaDigitada = 0;
    medias = 0;
    resultadoMedia = 0;

    puts("Quantas medias serao digitadas?");
    scanf("%d", &contador);

    for (i = 1; i <= contador; i++) {

      printf("Digite a %d media: ", i);
      scanf("%f", &mediaDigitada);

      medias = medias + mediaDigitada;
    }

    resultadoMedia = medias / contador;

    printf("\n\ta media geral dos %d medias digitadas e: %.2f!\n\n", contador, resultadoMedia);

    puts("Deseja calcular outra media aritmetica?\n\n\t[1] Sim\n\t[2] Nao\n ");
    scanf("%d", &condicao);

    if(condicao == 1) {
      continue;
    }
    else if(condicao == 2) {
      puts("Finalizado.");
      break;
    }
  }

  return 0;
}