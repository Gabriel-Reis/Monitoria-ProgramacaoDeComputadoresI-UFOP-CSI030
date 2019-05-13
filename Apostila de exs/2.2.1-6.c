#include <stdio.h>

int main (void){

int menor,maior,x;

printf ("Digite um intervalo: \n");
printf ("\nDigite o menor valor do intervalo: \n");
scanf ("%d", &menor);
printf ("Digite o maior valor do intervalo: \n");
scanf ("%d",&maior);

printf ("\nDigite um numero para verificar se esta no intervalo: \n");
scanf ("%d", &x);

    if ((menor<x)&&(x<maior))
            printf ("\n%d esta no intervalo.", x);
    else
        printf("\n%d nao esta no intervalo.",x);



return 0;
}
