/*
        Gabiel Augusto Requena dos Reis - 16.2.8105
        Sistemas de informacao - CSI030
*/

#include <stdio.h>

void resulta_em(int numero){

    int i,j;

    for(i=-numero; i<=numero; i++)
        for (j=-numero; j<=numero; j++)
            if(i*j == numero)
                printf("%d * %d = %d \n",i ,j ,numero);
}

int main(){

    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    resulta_em(x);

return 0;
}
