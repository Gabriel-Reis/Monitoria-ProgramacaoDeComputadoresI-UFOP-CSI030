#include <stdio.h>

int eh_multiplo(int a, int b){

    int div;

    if (b%a!=0)
        div = 0;
    else
        div = 1;

return (div);
}

int main (){

    int n, vet[10],i,div;

    printf("Digite um numero:   ");
    scanf("%d", &n);
    printf("\nDigite 10 numeros para verificar se sao divisiveis por %d\n",n);
    for (i=0; i<=9; i++)
    {
        printf("%d:   ",i+1);
        scanf("%d", &vet[i]);
    }

    for (i=0; i<=9; i++)
    {
        div = eh_multiplo (n, vet[i]);
        if (div == 1)
        {
            printf("O numero %d e divisivel por %d !\n", vet[i], n);
        }
        else if ( div == 0)
            printf("O numero %d nao e divisivel por %d !\n", vet[i], n);
    }

return 0;
}
