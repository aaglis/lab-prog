#include <stdio.h>
#include <math.h>

int main(void)
{
    float x1, x2, y1, y2, d;

    printf("Ponto A!\n");
    printf("X: ");
    scanf("%f", &x1);
    printf("Y: ");
    scanf("%f", &y1);

    printf("Ponto B!\n");
    printf("X: ");
    scanf("%f", &x2);
    printf("Y: ");
    scanf("%f", &y2);

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia entre o ponto A e o ponto B e: %.2f\n", d);

    return 0;
}