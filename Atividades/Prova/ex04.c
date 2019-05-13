/**
        Gabiel Augusto Requena dos Reis - 16.2.8105
        Sistemas de informacao - CSI030
*/


#include <stdio.h>
#include <math.h>

void pesquisar (int vetor[], int n){

    int menor = 99999, maior = -99999, count = 0, media = 0, i;

    for (i=0; i<n; i++)
    {
        media += vetor[i];

        if (vetor[i]<menor)
            menor = vetor [i];

        if ((vetor[i]>maior)&&(vetor[i]%2==0))
            maior = vetor[i];

        if (vetor[i]%2!=0)
            count++;
    }

    printf ("O menor valor e: %d \n",menor);
    printf ("O maior valor e: %d \n",maior);
    printf ("O vetor possui %d elementos impares \n",count);
    media = media/n;
    printf ("Os valores medios entre: %d e %d \n",media -1, media+1);

    for (i=0; i<n; i++)
    {
        if ((vetor[i]>= media-1)&&(vetor[i]<=media+1))
            printf("%d \t", vetor[i]);
    }
}

int main (){

    int i,n;
    printf("Digite o tamanho do vetor: ");
    scanf ("%d" ,&n);

    int vetor[n];

    for (i=0; i<n; i++)
    {
        printf("Digite o %d valor do vetor:  ",i+1);
        scanf ("%d", &vetor[i]);
    }

    pesquisar(vetor,n);
}
