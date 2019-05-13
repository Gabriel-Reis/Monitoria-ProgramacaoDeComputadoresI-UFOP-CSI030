#include <stdio.h>

int vermat(float matr[][300]){

    int i,j, count=0;
    float maior = -99999999999;

    for (i=0; i<200; i++)
        for (j=0; j<300; j++)
            if (matr[i][j] > maior)
                maior = matr[i][j];

    for (i=0; i<200; i++)
        for (j=0; j<300; j++)
            if (matr[i][j] == maior)
                count ++;

return (count);
}


int main (){

    float mat[200][300];
    int i,j;

    for (i=0; i<200; i++)
        for (j=0; j<300; j++)
        {
            printf("Digite a posicao %d %d da matriz: ",i+1, j+1);
            scanf("%f", &mat[i][j]);
        }

        printf("\n\nO maior numero aparece %d vezes\n\n",vermat(mat));

return 0;
}
