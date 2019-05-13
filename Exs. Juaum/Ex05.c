#include <stdio.h>

int so_positivo(int vetor[], int tamanho){

    int i, count=0;

    for (i=0; i<tamanho; i++)
        if (vetor[i]< 0)
        {
            vetor[i] = 0;
            count++;
        }
return (count);
}

int main (){
    int tam = 5, vet[]={1,-2,3,-4,5};

    printf(" A qantidade de valores alterados foi: %d", so_positivo(vet, tam));

return 0;
}
