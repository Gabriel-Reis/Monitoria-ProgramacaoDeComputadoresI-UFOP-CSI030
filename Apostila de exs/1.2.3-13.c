///     Pag 10 ex 13
///     Gabiel Augusto Requena dos Reis - 16.2.8105
///     Sistemas de informacao - CSI030

#include <stdio.h>

int main(void){

    float a,b;

    printf("Insira o valor da base do retangulo: ");
    scanf("%f",&a);
    printf("Insira a altura do retangulo: ");
    scanf("%f",&b);

    system ("cls");
    printf("\nPara o retangulo de base %.2f e altura %.2f\n",a,b);
    printf("A area equivale a %.2f e\n",a*b);
    printf("O perimetro equivale a: %.2f\n\n\n", a+a+b+b);

return 0;
}
