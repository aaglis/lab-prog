#include <stdio.h>

int main() {
    int i = 5, resultadoPreInc, resultadoPosInc;

    puts("Usando pre-incremento (++i):");

    resultadoPreInc = ++i - i;

    printf("\tResultado: %d\n", resultadoPreInc);
    printf("\tValor final de i: %d\n", i); 

    i = 5;

    puts("Usando pos-incremento:");

    resultadoPosInc = i++ - i;
    printf("\tResultado: %d\n", resultadoPosInc);
    printf("\tValor final de i: %d\n", i);

    return 0;
}