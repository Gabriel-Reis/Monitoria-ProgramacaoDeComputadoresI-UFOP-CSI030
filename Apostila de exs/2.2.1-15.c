#include <stdio.h>

int main (void){

int x,rest;

printf ("Digite um numero: \n");
scanf ("%d", &x);

rest = x%2;
    if (rest==0)
    printf ("O numero %d e par", x);
    else
    printf ("O numero %d e impar", x);



return 0;
}
