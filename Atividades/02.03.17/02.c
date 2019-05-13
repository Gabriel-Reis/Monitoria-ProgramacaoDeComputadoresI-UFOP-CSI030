/*
            GABRIEL AUGUSTO REQUENA DOS REIS    -   16.2.8105   -   UFOP/JM (SI)
*/

#include <stdio.h>
#include <math.h>

int main (){

    float pg[30], soma = 0, var[30], media=0, desv, somavar=0;
    int n, i;

    //DEFINE PRIMEIRO TERMO E RAZAO DA PG
    printf("Digite o primeiro termo da PG:   ");
    scanf("%f", &pg[0]);
    printf("Digite a razao da PG:   ");
    scanf("%d", &n);

    //CALCULA PG
    for (i=1; i<30; i++)
    {
        pg[i] = pg[(i-1)]*n;
        soma += pg[i];
    }

    media = soma/30;
    //CALCULA DESVIO PADRAO AMOSTRAL
    for (n=1;n<30;n++)
    {
        var[n] = pow((pg[n]-media), 2);
        somavar += var[n];
    }
    desv = sqrt(somavar);

    //EXIBE RESULTADOS
    printf("\n A soma da pg = %.2f", soma);
    printf("\n A media da pg = %.2f", soma/30);
    printf("\n Desvio padrao amostral da pg = %.2f", desv);


return 0;
}
