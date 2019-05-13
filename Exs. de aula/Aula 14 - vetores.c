#include <stdio.h>

int main (){

    int va[5], vb[5], i, soma=0;

    //Armazena valores no vetor
    printf("Digite os 5 valores do Vetor A: \n");
    for (i=0; i<=4; i++)
        scanf ("%d",&va[i]);
    printf("Digite os 5 valores do Vetor B: \n");
    for (i=0; i<=4; i++)
        scanf ("%d",&vb[i]);

    //Exibe valores no vetor
    printf ("\na: b:\n");
    for (i=0; i<=4; i++)
        printf("%d  %d\n",va[i],vb[i]);

    //Exibe Produto interno dos vetores inseridos
    for (i=0; i<=4; i++)
    soma += va[i] * vb[i];
    printf("\nProduto interno: %d\n\n", soma);


return 0;
}
