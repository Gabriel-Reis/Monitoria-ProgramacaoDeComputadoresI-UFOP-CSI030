/*
- Cria um vetor de alocação dinamica de tamanho n
- Verifica criação do vetor
- Recebe os valores do vetor
- Exibe os valores do vetor
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, n, *p=NULL;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    p = (int*) malloc(n * sizeof(int));

    if (p == NULL)
    {
        printf("Memoria insulficiente");
        return -1;
    }

    for (i=0; i<n; i++)
    {
        printf("Digite o valor na posicao %d:  ",i);
        scanf("%d", &p[i]);
    }

    system("cls");
    for (i=0; i<n; i++)
        printf("Vetor na posicao %d = %d \n",i+, p[i]);

    free(p);

    return 0;
}
