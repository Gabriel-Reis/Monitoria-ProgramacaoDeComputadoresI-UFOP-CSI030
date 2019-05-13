/**
        Gabiel Augusto Requena dos Reis - 16.2.8105
        Sistemas de informacao - CSI030
*/

#include <stdio.h>

void le_precos(int precosc[], int precosv[], int quantidade){

    int i;

    for (i=0; i<=(quantidade-1); i++)
    {
        printf("digite o valor de compra do %d produto:  ", i+1);
        scanf("%d", &precosc[i]);
    }
    for (i=0; i<=(quantidade-1); i++)
    {
        printf("digite o valor de venda do %d produto:  ", i+1);
        scanf("%d", &precosv[i]);
    }
}

void lucro(int precosc[], int precosv[], int quantidade){

    int i;

    for (i=0; i<=quantidade-1; i++)
    {
        if (((float)precosv[i]/precosc[i]) < 0)
            printf("Produto com prejuizo \n", i+1);
        else if ((precosv[i]/precosc[i]) == 0)
            printf("Produto sem lucro \n", i+1);
        else if (((float)precosv[i]/precosc[i]) > 0 && ((float)precosv[i]/precosc[i]) < 1.1)
            printf("Produto %d tem lucro inferior a 10\n", i+1);
        else if (((float)precosv[i]/precosc[i]) > 1.1 && ((float)precosv[i]/precosc[i]) < 1.2)
            printf("Produto %d tem lucro entre 10 e 20\n", i+1);
        else if (((float)precosv[i]/precosc[i]) >= 1.2)
            printf("Produto %d tem lucro superior a 20\n", i+1);
    }
}

int main (){

    int precosc[10], precosv[10], quantidade = 10;

    le_precos (precosc,precosv,quantidade);
    lucro(precosc, precosv, quantidade);

return 0;
}
