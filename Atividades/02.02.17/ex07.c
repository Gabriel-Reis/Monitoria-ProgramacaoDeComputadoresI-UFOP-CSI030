/**
        Gabiel Augusto Requena dos Reis - 16.2.8105
        Sistemas de informacao - CSI030
*/

#include <stdio.h>

void recebenotas(float n1[], float n2[]){

    int i,j;

    for (i=0; i<=9; i++)
    {
        printf ("Digite a 1 nota do %d aluno:   ", i+1);
        scanf ("%f", &n1[i]);
        printf ("Digite a 2 nota do %d aluno:   ", i+1);
        scanf ("%f", &n2[i]);
    }

}

void calculamedia (float n1[], float n2[], float media[]){

    int i,j;

    for (i=0; i<=9; i++)
    {
        media[i] = ((n1[i]+n2[i])/2);
    }

}

void exiberesult (float n1[], float n2[], float media[]){

    int i,j;

    for (i=0; i<=9; i++)
    {
        printf ("\nAluno %d\n", i+1);
        printf ("\tNota 1: %.2f\n", n1[i]);
        printf ("\tNota 2: %.2f\n", n2[i]);
        printf ("\tMedia : %.2f\n", media[i]);
    }

}

int main (){

    float n1[10], n2[10], media[10];

    recebenotas(n1, n2);
    calculamedia(n1, n2, media);
    exiberesult(n1, n2, media);

return 0;
}
