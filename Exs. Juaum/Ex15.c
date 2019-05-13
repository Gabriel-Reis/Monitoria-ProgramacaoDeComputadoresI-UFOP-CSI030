#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[5][5];
    int i,j;
    float soma,soma2,soma3,soma4;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Por favor digite o elemento A(%d %d) - ",i+1,j+1);
            scanf("%f",&matriz[i][j]);
            if(i==j){
                soma+=matriz[i][j];
            }
        }
    }
    system("cls");
    for(j=0;j<5;j++){
        i=4;
        soma2+=matriz[i][j];
    }
    for(i=0;i<5;i++){
        j=2;
        soma3+=matriz[i][j];
    }
    soma4=matriz[1][5]+matriz[2][4]+matriz[3][3]+matriz[4][2]+matriz[5][1];
    printf("A soma da diagonal principal e %.2f\n",soma);
    printf("A soma da linha 4 e %.2f\n",soma2);
    printf("A soma da coluna 2 e %.2f\n",soma3);
    printf("A soma da diagonal secundaria e %.2f\n",soma4);
    return 0;
}
