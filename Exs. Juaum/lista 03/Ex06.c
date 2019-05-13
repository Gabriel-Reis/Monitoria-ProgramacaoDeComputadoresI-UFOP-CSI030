
#include <stdio.h>
#include <stdlib.h>
struct pessoa{
    float peso;
    float altura;
};

int main(){

    struct pessoa joao, maria;
    joao.altura = 1.90;
    joao.peso = 98;
    maria.altura = 1.50;
    maria.peso = 55;

    //a)
    joao.altura = 1.78;
    //b)
    maria.peso = 75;
    //c
    printf("Media dos pesos: %.2f", (joao.peso/maria.peso));
    printf("\n Media das alturas: %.2f", (joao.altura/maria.altura));
return 0;
}
