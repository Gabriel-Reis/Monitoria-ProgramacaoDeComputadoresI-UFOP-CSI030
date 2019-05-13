/**
        Gabiel Augusto Requena dos Reis - 16.2.8105
        Sistemas de informacao - CSI030
*/

#include <stdio.h>

int multiplica_intervalo(int n1, int n2){
    int multi = 1, i;


    if (n1 < n2)
    {
        multi = n1;
        for (i=n1+1; i<=n2; i++)
        {
        if (i == 0)
           continue;
        multi *= i;
        }
    }
    else if (n2 < n1)
    {
        multi = n2;
        for (i=n2+1;i<=n1; i++)
        {
        if (i == 0)
            continue;
        multi *= i;
        }
    }
    else if (n1 == n2)
    {
        multi = n1;
    }

return (multi);
}


int main () {

    int n1,n2, mult = 0;

    printf("Digite o primeiro valor do intervalo desejado: ");
    scanf ("%d", &n1);

    printf("Digite o segundo valor do intervalo desejado: ");
    scanf ("%d", &n2);

    mult = multiplica_intervalo(n1, n2);
    printf("A multiplicao dos valores do intervalo e: %d", mult);


return (0);
}
