#include <stdio.h>

int main(){

    int a, *a1;
    float b, *b1;
    a1 = &a;
    b1 = &b;


    printf("Digite o valor de a:  ");
    scanf ("%d", &a);
    printf("Digite o valor de b:  ");
    scanf ("%f", &b);

    printf("\n\n\nValores originais: %d, %.2f \n",*a1,*b1);
    (*a1) = (*a1) * 3;
    (*b1) = (*b1) * 3;
    printf("Valores alterados: %d, %.2f \n", *a1,*b1);

return 0;
}
