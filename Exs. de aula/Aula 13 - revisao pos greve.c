#include <stdio.h>

int main (void){

    int num;
    int i = 0;
    int n = 1;
    int maior = -9999999;
    int menor = 9999999;
    int media = 0;
    int valor;

    printf ("Digite a quantidade de valores que gostaria de inserir:  ");
    scanf ("%d", &num);

    for (i=1; i<=num; i++)
        {
        printf (" Digite o %d valor:  ", n);
        scanf("%d", &valor);
        n++;
        media += valor;

        if  (valor > maior)
            maior = valor;
        if  (valor < menor)
            menor = valor;
        }

    if (num>0)
        {
        printf ("\n A media dos valores digitados e: %.2f", (float)media/(float)num);
        printf("\n O maior numero e: %d", maior);
        printf("\n O menor numero e: %d \n\n\n", menor);
        }
    else
        printf("\n\nNumero digitado menor ou igual a zero.\n\n\n");


    return(0);
}
