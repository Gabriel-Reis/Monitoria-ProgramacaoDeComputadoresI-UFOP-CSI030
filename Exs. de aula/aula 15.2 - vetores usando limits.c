#include <stdio.h>
#include <limits.h>

int maiorValor(int vet[], int tam){
    int maior = INT_MIN;
    int j;

    for (j=0; j<tam; j++)
    {
        if (vet[j] > maior)
        maior = vet[j];
    }

    return (maior);
    }


int main ()
{

int i = 0, maior=0;


int vet[5];
printf("Digite os 5 valores:   \n");
    for (i=0; i<5; i++)
    {
    printf("Digite o %d valor:  ",(i+1));
    scanf("%d", &vet[i]);
    }

maior = maiorValor (vet, i);
printf("maior : %d",maior);
return (0);
}
