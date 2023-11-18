#include <stdio.h>

int main() {
    int inteiro = 42;
    float pontoFlutuante = 3.14;
    double pontoFlutuanteDuplo = 2.71828;
    char caractere = 'A';
    unsigned int inteiroSemSinal = 123;
    short int inteiroCurto = 32767;
    long int inteiroLongo = 1234567890;
    long long int inteiroLongoLongo = 9876543210;

    printf("Tipo           | Formato de Saída\n");
    printf("---------------|-----------------\n");
    printf("Inteiro        | %%d: %d, %%u: %u, %%x: %x\n", inteiro, inteiro, inteiro);
    printf("Ponto Flutuante| %%f: %f, %%e: %e\n", pontoFlutuante, pontoFlutuante);
    printf("Pto. Flut. Dup.| %%lf: %lf, %%le: %le\n", pontoFlutuanteDuplo, pontoFlutuanteDuplo);
    printf("Caractere      | %%c: %c\n", caractere);
    printf("Int. S/ Sinal  | %%u: %u\n", inteiroSemSinal);
    printf("Int. Curto     | %%hd: %hd\n", inteiroCurto);
    printf("Int. Longo     | %%ld: %ld\n", inteiroLongo);
    printf("Int. L. Longo  | %%lld: %lld\n", inteiroLongoLongo);

    return 0;
}