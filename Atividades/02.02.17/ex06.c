/**
        Gabiel Augusto Requena dos Reis - 16.2.8105
        Sistemas de informacao - CSI030
*/

int eh_multiplo(int a, int b){

    int mult;

    if (b%a == 0)
        mult = 1;
    else
        mult = 0;

return (mult);
}


int main (){

    int x, vet[10], i, mult;

    printf("Digite um numero:  ");
    scanf ("%d", &x);

    printf("Digite outros 10 numeros para verificar se sao divisiveis por %d \n", x);
    for (i=0; i<=9; i++)
    {
        printf(" Digite o %d numero:  ", i+1);
        scanf ("%d", &vet[i]);
    }

    for (i=0; i<=9; i++)
    {
        mult = eh_multiplo(x, vet[i]);
        if (mult == 1)
            printf ("\n%d e multiplo de %d ", vet[i], x);
        else
            printf ("\n%d nao e multiplo de %d ", vet[i], x);
    }

return (0);
}
