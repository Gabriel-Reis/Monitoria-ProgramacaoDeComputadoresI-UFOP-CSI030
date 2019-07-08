#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int n,i,sum=0, *vet;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    vet = (int*) malloc(n*sizeof(int));

    srand(time(NULL));
    for(i=0;i<n;i++){
        vet[i] = ((rand()%990)+10);
    }

    printf("Vetor: ");
    for(i=0;i<n;i++){
        printf("%d ",vet[i]);
        sum += vet[i];
    }

    printf("\nsoma = %d",sum);
    printf("\nmedia = %.2f",(float) sum/n);

    free(vet);
    printf("\nVetor liberado.");
}
