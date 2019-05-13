/*
        Gabiel Augusto Requena dos Reis - 16.2.8105
        Sistemas de informacao - CSI030
*/

#include <stdio.h>
#include <stdlib.h>

void lematriz(int tam, int p[tam][tam]){

    int i, j;
    for (i=0; i<tam; i++)
        for (j=0; j<tam; j++)
        {
            system ("cls");
            printf("Digite o valor da linha %d - coluna: %d da matriz:  ",i+1, j+1);
            scanf("%d", &p[i][j]);
        }
}

void calcproduto (int x, int tam, int p[][tam], int p2[][tam]){

    int i,j ;
    for (i=0; i<tam; i++)
        for (j=0; j<tam; j++)
        (p2[i][j]) = (p[i][j]*x);
}

void imprimematriz(int tam, int *mat[tam][tam]){

    int i, j;
    for (i=0; i<tam; i++)
    {
        for (j=0; j<tam; j++)
        printf("%d \t", mat[i][j]);
    printf("\n");
    }
}

int main(){

    int tam, x, **p, **p2,i ,j;

    printf("Digite o tamanho da matriz:  ");
    scanf("%d", &tam);
    printf("Digite um valor inteiro:  ");
    scanf("%d", &x);

    //cria 2 matrizes alocadas
    p = (int**) malloc (tam*sizeof(int*));
    for (i = 0; i < tam; i++)
        p[i] = (int*) malloc(tam * sizeof(int));
    p2 = (int**) malloc (tam*sizeof(int*));
    for (i = 0; i < tam; i++)
        p2[i] = (int*) malloc(tam * sizeof(int));

    lematriz(tam, *p);
    calcproduto(x, tam, *p, *p2);
    printf("Matriz original: \n");
    imprimematriz(tam, *p);
    printf("Matriz modificada: (original * %d)\n", x);
    imprimematriz(tam, *p2);

    //Libera memoria utilizada em P e P2
    for(i = 0; i < tam; i++)
        free(*p[i]);
    free(p);
    for(i = 0; i < tam; i++)
        free(*p2[i]);
    free(p2);

return 0;
}
