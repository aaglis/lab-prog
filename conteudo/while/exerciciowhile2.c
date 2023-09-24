#include <stdio.h>

int main() {

  int numero1, numero2;
  char soun;

  printf("Operacao - Adicao!\n");

  while(1) {

    printf("digite um numero: ");
    scanf("%d", &numero1);
    printf("digite outro numero: ");
    scanf("%d", &numero2);

    printf("%d + %d = %d\n", numero1, numero2, numero1 + numero2);

    printf("deseja realizar outra soma? [S ou N] ");
    scanf(" %c", &soun);

    if(soun == 'S'){
      printf("Resposta: s\n");
      continue;
    }
    else if (soun == 'N'){
      printf("Resposta: n\n");
      break;
    }
  }

  return 0;
}

