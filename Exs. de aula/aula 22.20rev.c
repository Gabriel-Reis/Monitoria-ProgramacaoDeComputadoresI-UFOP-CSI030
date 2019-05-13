#include <stdio.h>
#include <math.h>

void vet(int x[],int tam, int y){

    if (y == tam-1)
        printf("%d\n", x[tam-1]);
    else
        {
        printf("%d\n", x[y]);
        vet(x, tam, y+1);
        }
}

void vetc(int x[],int tam){

    if (tam == 0)
        printf("%d\n", x[0]);
    else
        {
        printf("%d\n", x[tam-1]);
        vetc(x, tam-1);
        }
}

int main (){

    int tam = 5,x[tam],i,y=0;

    for (i=0; i<tam; i++)
    {
        printf("Digite o %d valor do vetor:  ",i);
        scanf ("%d", &x[i]);
    }
    vet(x,tam,y);
    vetc(x,tam);
}
