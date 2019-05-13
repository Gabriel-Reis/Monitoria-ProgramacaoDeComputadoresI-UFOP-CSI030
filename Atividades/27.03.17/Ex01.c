/*
        Gabiel Augusto Requena dos Reis - 16.2.8105
        Sistemas de informacao - CSI030
*/


#include <stdio.h>

void potencia(int base, int expoente, long int *resultado){

    if (expoente == 0)
    {
        *resultado = 1;
        printf("base: %d * exp: %d = %d\n", base, expoente, (*resultado));
        potencia(base, (expoente+1), resultado);
    }
    else if ((expoente == 1)||(base == 1))
    {
        *resultado = base;
        printf("base: %d * exp: %d = %d\n", base, expoente, (*resultado));
        potencia(base, (expoente+1), resultado);
    }
    else if (expoente < 11)
    {
        (*resultado) = (*resultado) * base;
        printf("base: %d * exp: %d = %d\n", base, expoente, (*resultado));
        potencia(base, (expoente+1), resultado);
    }
}

int main(){

    int i, resultado=0;

    for (i=3; i<10; i+=2)
    {
        printf("\n 11 primeiros expoentes de %d:  \n", i);
        potencia(i, 0, &resultado);
    }

return 0;
}
