#include <stdio.h>

int somavet(int tam, int vet[]){

    //PASSO BASE
    if (tam==1)
        return (vet[0]);
    //Passo indutivo
    else
        return (vet[tam-1] + somavet(tam-1, vet));
}

int main(){

    int tam = 10,i;
    int vet[tam];

    printf("Digite 10 valores");
    for (i=0; i<tam; i++)
        scanf("%d", &vet[i]);

    printf("Soma dos elementeos do vetor: %d", somavet(tam, vet));

return (0);
}
