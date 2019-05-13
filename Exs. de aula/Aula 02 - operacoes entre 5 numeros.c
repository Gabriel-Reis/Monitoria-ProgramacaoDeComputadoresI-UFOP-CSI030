#include <stdio.h>

int main (void){

   float a,b,c,d,e;
    printf("Informe cinco numeros inteiros:\n");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);

        float soma = (a+b+c+d+e);
        float subt = (a-b-c-d-e);
        float mult = (a*b*c*d*e);
        float divd = (a/b/c/d/e);
        float med = (soma/5);

    printf("A soma e:%f\n A subtracao e:%f\n A multiplicacao e:%f\n A divisao e:%f\n A media e:%f\n", soma, subt, mult, divd, med);

    return 0;
}


