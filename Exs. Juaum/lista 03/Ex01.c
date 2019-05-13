#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p, i;

    p =  malloc (10 * sizeof(int));

    for (i=0; i<10; i++)
    {
        printf("Digite um valor:  ");
        scanf("%d", &p[i]);
    }

    for (i=0; i<10; i++)
    {
        printf("\n Endereco de mem.: %p Valor: %d", p[i], p[i]);
    }

    free(p);
return 0;
}
