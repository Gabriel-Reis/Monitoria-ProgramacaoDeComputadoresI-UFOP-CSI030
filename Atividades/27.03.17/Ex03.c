/*
        Gabiel Augusto Requena dos Reis - 16.2.8105
        Sistemas de informacao - CSI030
*/

#include <stdio.h>

int main(){

    int tam=20;
    int mat[tam][tam],i, j;
    int menorsoma = 99999, maiorsoma = -99999;
    int aux=0, aux2=0, auxmen=0, auxmai=0;
    srand(time(NULL));

    for(i=0; i<tam; i++)
        for(j=0; j<tam; j++)
            mat[i][j] = (rand() % 10+1); //atribui valores aleatorios para a matriz

    // EXIBE A MATRIZ PARA CONFERIR RESULTADO
    /*for(i=0; i<tam; i++)
    {
        for(j=0; j<tam; j++)
            printf("%d\t", mat[i][j]);
    printf ("\n");
    }
    */

    for(i=0; i<tam; i++)
    {
        for(j=0; j<tam; j++)
        {
            aux += mat[i][j]; //Soma linha (menor)
            aux2 += mat[j][i]; //Soma coluna (maior)
            if (aux < menorsoma)
            {
                menorsoma = aux;
                auxmen = i;
            }
            if (aux2 > maiorsoma)
            {
                maiorsoma = aux2;
                auxmai = i;
            }
        }
    aux=0; aux2=0;
    }

    printf("Coluna com maior soma = %d\n", auxmai+1);
    printf("linha com menor soma = %d", auxmen+1);
return 0;}
