#include <stdio.h>

int somax(int x, int soma){

    printf("Digite um numero:  ");
    scanf("%d", &x);

    if (x == 0)
        return (soma);
    else
    {
        soma += x; //soma = soma + x
        return(somax(x, soma));
    }
}


int main (){

    int x = 1, soma = 0;

    printf("A soma e: %d ", somax(x,soma));

return 0;
}
