#include <stdio.h>

int main (void){

    int num, soma, i;
    soma = 0;

    printf("Digite um numero:   ");
    scanf ("%d", &num);

    for (i=1; i<=num; i++)
        soma+=i;


printf("A soma e: %d", soma);
}
