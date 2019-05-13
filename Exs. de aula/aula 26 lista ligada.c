#include <stdio.h>

struct complexos{
    float compl;
    float real;
};

int main(){

    struct complexos x1,x2;


    printf("Digite um numero complexo:  ");
    scanf("%f", &x1.compl);
    printf("Digite sua parte real:      ");
    scanf("%f", &x1.real);
    printf("Digite um numero complexo:  ");
    scanf("%f", &x2.compl);
    printf("Digite sua parte real:      ");
    scanf("%f", &x2.real);

    printf("\n\nSoma: %.2f + %.2fi\n\n\n", x1.real+x2.real, x1.compl+x2.compl);

return 0;
}
