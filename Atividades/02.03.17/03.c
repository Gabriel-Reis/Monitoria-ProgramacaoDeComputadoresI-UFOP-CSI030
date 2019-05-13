/*
            GABRIEL AUGUSTO REQUENA DOS REIS    -   16.2.8105   -   UFOP/JM (SI)
*/

#include <stdio.h>
#include <time.h>
#include <math.h>

int main (){

    float media=0, desv, somavar=0;
    float rosen[100], soma = 0, maior,  menor;
    int i,j,x,y;
    srand(time(NULL));

    for (i=0; i<100; i++)
    {
        //GERA VALORES ALEATORIOS
        x = (rand() % 10+1);
        y = (rand() % 10+1);
        //APLICA FORMULA DE ROSENBROCK
        rosen[i] = pow((1 - x),2) + pow(y - pow(x,2),2)*100;
        //SOMA VALORES
        soma += rosen[i];
        //EXIBE
        printf ("%d \t %d \t %.2f \n",x,y, rosen[i]);
    }

    //DEFINE MAIOR E MENOR
    maior = rosen[0];
    menor = rosen[0];
    for (i=1; i<100; i++)
    {
        if (rosen[i] > maior)
            maior = rosen[i];
        else if (rosen[i] < menor)
            menor = rosen[i];
        else
            continue;
    }
    media = soma/100;
    //CALCULA DESVIO PADRAO AMOSTRAL
    for (i=1; i<30; i++)
    {
        rosen[i] = pow((rosen[i]-media), 2);
        somavar += rosen[i];
    }
    desv = sqrt(somavar);

    //exibe resultados
    printf("maior elemento do vetor: %.2f \n", maior);
    printf("menor elemento do vetor: %.2f \n", menor);
    printf("soma dos elementos do vetor: %.2f \n", soma);
    printf("media dos elementos do vetor: %.2f \n", media);
    printf("Desvio padrao amostral do vetor:  %.2f \n", desv);

    return(0);
}

