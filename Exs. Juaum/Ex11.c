#include <stdio.h>
#include <stdlib.h>

float func(float vet[5][5], float soma)
{
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            soma+=vet[i][j];
        }
    }
    return soma;
}
int main()
{
    float soma,matriz[5][5];
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Digite o elemento A(%d %d) - ",i+1,j+1);
            scanf("%f",&matriz[i][j]);
        }
    }
    system("cls");
    soma=func(matriz,soma);
    printf("A soma e %.2f",soma);
    return 0;
}
