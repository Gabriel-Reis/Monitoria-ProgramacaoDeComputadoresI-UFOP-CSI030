#include <stdio.h>
int verif(int mat[3][3], int x){

    int i,j;

    for (i=0; i<3; i++)
        for (j=0; j<3; j++)
            if (mat[i][j] == x)
                return 1;
}


int main (){

    int mat[3][3],x,i,j;

    for (i=0; i<3; i++)
        for (j=0; j<3; j++)
        {
            printf("Digite o numero da %d linha e %d coluna:   ",i+1, j+1);
            scanf ("%d", &mat[i][j]);
        }

    printf("Digite um numero:   ");
    scanf ("%d", &x);

    if (verif(mat, x) == 1)
        printf("Existe %d na matriz",x);
    else
        printf("Nao existe %d na matriz",x);

return 0;
}

