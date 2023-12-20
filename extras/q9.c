#include <stdio.h>
#include <math.h>

struct coordenadas {
  double x;
  double y;
};

void receberCoordenadas(struct coordenadas *ponto);
void imprimirCoordenadas(struct coordenadas *ponto);
double calcularDistancia(struct coordenadas *ponto1, struct coordenadas *ponto2);

int main(void) {

  struct coordenadas pontos[2];
  double resultado;

  for(int i = 0; i < 2; i++) {
    receberCoordenadas(&pontos[i]);
    imprimirCoordenadas(&pontos[i]);  
  }
  
  resultado = calcularDistancia(&pontos[0], &pontos[1]);
  printf("distância entre os dois pontos: %.2lf\n", resultado);
  
  return 0;
}

void receberCoordenadas(struct coordenadas *ponto) {
  printf("Digite o valor de x: ");
  scanf("%lf", &ponto->x);
  
  printf("Digite o valor de y: ");
  scanf("%lf", &ponto->y);
}

void imprimirCoordenadas(struct coordenadas *ponto) {
  printf("Coordenadas: (%.2lf, %.2lf)\n", ponto->x, ponto->y);
}

double calcularDistancia(struct coordenadas *ponto1, struct coordenadas *ponto2) {
  double x1 = ponto1->x;
  double x2 = ponto2->x;
  double y1 = ponto1->y;
  double y2 = ponto2->y;
  
  double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  return distancia;
}