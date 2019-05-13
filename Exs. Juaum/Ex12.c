#include <stdio.h>
#include <stdlib.h>


float func(float matriz[7][6], float soma) ///soma coluna 3
{
    int i;
    for(i=0;i<7;i++){
        soma+=matriz[i][3];
    }
    return soma;
}
float func2(float matriz[7][6], float soma2) ///soma linha 5
{
    int j;
    for(j=0;j<6;j++){
        soma2+=matriz[5][j];
    }
    return soma2;
}
int main()
{
    int i,j;
    float soma=0,soma2=0,vet[7][6];
    for(i=0;i<7;i++){
        for(j=0;j<6;j++){
            printf("Digite o elemento A(%d %d) - ",i+1,j+1);
            scanf("%f",&vet[i][j]);
        }
    }
    soma=func(vet,soma);
    soma2=func2(vet,soma2);
    printf("A soma da coluna 3 e %.2f e da linha 5 e %.2f",soma,soma2);
    return 0;
}
