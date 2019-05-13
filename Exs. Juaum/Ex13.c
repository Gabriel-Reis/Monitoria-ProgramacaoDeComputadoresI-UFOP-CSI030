#include <stdio.h>
#include <stdlib.h>

float func(int tam, float matriz[tam][tam], float menor)
{
    int i,j;
    menor=matriz[0][0];
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(i==j){
                if(matriz[i][i]<menor){
                    menor=matriz[i][i];
                }
            }
        }
    }
    return menor;
}
int main()
{
    int tam=6,i,j;
    float vet[tam][tam];
    float menor;
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            printf("Digite o elemento A(%d %d) - ",i+1,j+1);
            scanf("%f",&vet[i][j]);
        }
    }
    system("cls");
    menor=func(tam,vet,menor);
    printf("O menor valor e %.2f",menor);
    return 0;
}
