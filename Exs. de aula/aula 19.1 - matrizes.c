#include <stdio.h>

int main(){

    int m[5][5], i,j;

    //Recebe valores da matriz
    for (i=0; i<5; i++)
        for (j=0; j<5; j++)
        {
        printf("digite o valor da posicao [%d] [%d]:  ", i+1,j+1);
        scanf ("%d", &m[i][j]);
        }

    //Exibe valores da matriz originial
    printf("\n\n");
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
            printf("%d \t", m[i][j]);
        printf("\n\n");
    }

    //Exibe valores da matriz transposta
    printf("\n\n");
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
            printf("%d \t", m[j][i]);
        printf("\n\n");
    }

 return 0;
}
