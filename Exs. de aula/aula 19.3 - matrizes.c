#include <stdio.h>

int maior (float m[4][4], int n){
    int i=0,j=0,x;
    int maior = m[0][0];

    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            if (m[i][j]>maior)
                maior = m[i][j];

return (maior);
}

int menor (float m[4][4], int n){
    int i,j,x;
    int maior = m[0][0];

    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            if (i<j)
                maior = m[i][j];

return (menor);
}

int main(){

    float m[4][4];
    int i,j, n=4;

    //Recebe valores da matriz
    for (i=0; i<4; i++)
        for (j=0; j<4; j++)
        {
            printf("digite o valor da posicao [%d] [%d]:  ", i+1,j+1);
            scanf ("%f", &m[i][j]);
        }

    //Exibe valores da matriz originial
    printf("\n\n");
    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
            printf("%.2f \t", m[i][j]);
        printf("\n\n");
    }

    printf("Maior valor: %.2f", maior (m, n));
    printf("Maior valor: %.2f", menor (m, n));
 return 0;
}
