#include <stdio.h>
#include <math.h>
int main () {
    int n;
    int i;
    float PG[30];
    float soma=0;
    float variavel[30];
    float media=0;
    float desvioPadrao;
    float somaVariavel=0;

    printf("Digite o primeiro termo da progressao geometrica: ");
    scanf("%f", &PG[0]);

    printf("Digite o numero da PG: ");
    scanf("%d", &n);

    for(i=1; i<30; i++){
        PG[i]=PG[(i-1)]*n;
        soma+= PG[i];
    }

    media=soma/30;
    for(n=1; n<30; n++){
        variavel[n]=pow((PG[n]-media),2);
        somaVariavel+= variavel[n];
    }
    desvioPadrao= sqrt(somaVariavel);

    printf("\n\t A soma da PG = %.2f", soma);
    printf("\n\t A media da PG = %.2f", soma/30);
    printf("\n\t Desvio padrao da PG = %.2f", desvioPadrao);


return(0);
}
