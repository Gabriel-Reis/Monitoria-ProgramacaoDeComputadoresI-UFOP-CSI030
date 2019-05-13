#include <stdio.h>
#include <limits.h>

int ordenado (int vetor[], int tamanho){
    int i, ordem = 0;

    for (i=1; i<=tamanho; i++)
    {
    if(vetor[i] >= vetor[i-1])
        ordem = -1;
    else
        ordem = 0;
        break;
    }

    if (ordem == 0){
    for (i=1; i<=tamanho; i++)
    {
    if(vetor[i] <= vetor[i-1])
        ordem = 1;
    else
        ordem = 0;
        break;
    }
    }
return ordem;
}


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

int main (){

int i = 0, maior=0;
int ord = 0;

int vet[5];
printf("Digite os 5 valores:   \n");
    for (i=0; i<5; i++)
    {
    printf("Digite o %d valor:  ",(i+1));
    scanf("%d", &vet[i]);
    }

maior = maiorValor (vet, i);
printf("maior : %d",maior);

ord = ordenado(vet, i);
    if (ord == 1)
    printf ("Vetor em ordem decrescente");
    else if (ord == -1)
    printf ("Vetor em ordem crescente");
    else
    printf ("Vetor fora de ordem");
}
