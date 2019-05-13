#include <stdio.h>

int fatorial(int n){

    //PASSO BASE
    if (n <= 1)
        return 1;
    //Passo indutivo
    else
        return (n*fatorial(n-1));
}

int main(){

    int fat, n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Fatorial: %d", fatorial(n));

return (0);
}
