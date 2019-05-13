#include <stdio.h>

int fibonacci(int n){

    //PASSO BASE
    if (n == 1)
        return (0);
    else if (n == 0)
        return(1);
    //Passo indutivo
    else
        return (fibonacci(n-1)+fibonacci(n-2));
}

int main(){

    int n;

    printf("Digite o elemento da serie de Fibonnaci:  ");
    scanf("%d", &n);

    printf("o %d elemento e: %d", n, fibonacci(n));

return (0);
}
