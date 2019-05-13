#include <stdio.h>

int main(){

    float m[4][3];
    int i,j;

    //Recebe valores da matriz
    for (i=0; i<4; i++)
        for (j=0; j<3; j++)
        {
            printf("digite o valor da posicao [%d] [%d]:  ", i+1,j+1);
            scanf ("%f", &m[i][j]);
        }

    //Exibe valores da matriz originial
    printf("\n\n");
    for (i=0; i<4; i++)
    {
        for (j=0; j<3; j++)
            printf("%.2f \t", m[i][j]);
        printf("\n\n");
    }

    //Exibe valores da matriz transposta
    printf("\n\n");
    for (i=0; i<4; i++)
    {
        for (j=0; j<3; j++)
            printf("%.2f \t", (m[j][i])*3.5);
        printf("\n\n");
    }

 return 0;
}
