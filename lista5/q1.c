#include <stdio.h>
#include <stdlib.h>
void realizarOperacao(int *resultado, int num1, int num2, char operacao);

void exibirResultado(int resultado, int num1, int num2, char operacao);

int main(int argc, char *argv[]) {
  
    if (argc != 4) {
        printf("Uso: %s <num1> <num2> <operacao (+ ou *)>\n", argv[0]);
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    char operacao = argv[3][0];

    int resultado;

    realizarOperacao(&resultado, num1, num2, operacao);

    exibirResultado(resultado, num1, num2, operacao);

    return 0;
}

void realizarOperacao(int *resultado, int num1, int num2, char operacao) {
    if (operacao == '+') {
        *resultado = num1 + num2;
    } else if (operacao == '*') {
        *resultado = num1 * num2;
    } else {
        printf("Operacao invalida. Use + ou *\n");
        exit(1);
    }
}

void exibirResultado(int resultado, int num1, int num2, char operacao) {
    printf("%d %c %d = %d\n",num1, operacao, num2, resultado);
}