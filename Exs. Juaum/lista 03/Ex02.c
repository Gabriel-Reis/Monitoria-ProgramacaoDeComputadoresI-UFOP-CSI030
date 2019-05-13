#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    float vet[5], *p;
    p = vet;

    for (i=0; i<5; i++)
    {
        printf("Digite um valor:  ");
        scanf("%f", &p[i]);
    }

    for (i=0; i<5; i++)
    {
        printf("\n Valor: %.2f", p[i]);
    }

    free(p);
return 0;
}
