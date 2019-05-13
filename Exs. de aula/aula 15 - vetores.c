#include <stdio.h>

int maiorValor(int vet[], int tam){

    int x = -99999;
    int i;
    for (i=0; i<tam; i++){
        if (vet[i] > x)
            x = vet[i];
    }

return x;
}


int main(){
    int n = 5, i, vet[n],maior;
    for (i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }
    maior = maiorValor(vet, n);
            printf(" maior valor e: %d ",maior);

return (0);
}
