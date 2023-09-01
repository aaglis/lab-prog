#include <stdio.h>
#include <math.h>

int main(){
    
  float primeiroNumero, segundoNumero, terceiroNumero, mediaAritmetica, mediaGeometrica;

  printf("Digite o primeiro numero: ");
  scanf("%f", &primeiroNumero);
  printf("Digite o segundo numero: ");
  scanf("%f", &segundoNumero);
  printf("Digite o terceiro numero: ");
  scanf("%f", &terceiroNumero);

  mediaAritmetica = (primeiroNumero + segundoNumero + terceiroNumero) / 3;

  mediaGeometrica = pow( primeiroNumero * segundoNumero * terceiroNumero, 1.0/3.0);

  printf("Voce digitou os numeros %.2f, %.2f, %.2f\n", primeiroNumero, segundoNumero, terceiroNumero);
  printf("A media aritmetica e: %.2f!\n", mediaAritmetica);
  printf("A media geometrica e: %.2f!\n", mediaGeometrica);
  return 0;
}