#include <stdio.h>

int main(void) {

  float altura, pesoIdeal;
  char sexo;

  printf("Digite seu sexo:\n");
  scanf("%c", &sexo);
  printf("Digite sua altura:\n");
  scanf("%f", &altura);

  if(sexo == 'm') {
    pesoIdeal = 72.7 * altura - 58;
  }
  else if(sexo == 'f'){
    pesoIdeal = 62.1 * altura - 44.7;
  }
  else {
    printf("Errou ao digitar seu sexo ou sua altura.\n");
  }

  printf("Seu peso ideal e: %.2f\n", pesoIdeal);
  return 0;
}