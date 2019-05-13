#include <stdio.h>

int main(){

    int m[3][3], i,j, soma = 0, somadp=0, mediadp=0, somads=0, mediads=0;

    //Recebe valores da matriz
    for (i=0; i<3; i++)
        for (j=0; j<3; j++)
        {
        printf("digite o valor da posicao [%d] [%d]:  ", i,j);
        scanf ("%d", &m[i][j]);
        soma += m[i][j];
        }

    //Exibe valores da matriz
    printf("\n\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
            printf("%d \t", m[i][j]);
        printf("\n\n");
    }

    //Calcula soma da diagonal principal e soma com a media da diagonal principal
    for (i=0; i<3; i++)
        somadp += m[i][i];
    mediadp = somadp / (i);

    //Calcula soma da diagonal secundaria e soma com a media da diagonal secundaria
    for (i=0; i<=2; i++)
            somads += m[i][3-i];
    mediads = somads / (i);

    //Exibe valores calculados
    printf("\nA soma dos valores da matriz e: %d", soma);
    printf("\nA media e: %.2f", (float)soma/(i*j));
    printf("\nA soma da diagonal principal e: %d", somadp);
    printf("\nA soma do total da matriz e da media e: %.2f", (float)somadp + (float)mediadp);
    printf("\nA soma da diagonal secundaria e: %d", somads);
    printf("\nA soma do total da matriz e da media secundariae: %.2f", (float)somads + (float)mediads);


return 0;
}
