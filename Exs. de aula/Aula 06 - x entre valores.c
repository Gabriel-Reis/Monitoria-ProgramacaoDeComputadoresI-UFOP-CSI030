#include <stdio.h>

int main (void){
int x;

printf("digite um numero: ");
scanf ("%d", &x);

    if ((x>=20)&&(x<=90))
        printf ("numero compreendido no intervalo de 20 a 90");
    else
        printf ("numero fora do intervalo de 20 a 90");



return 0;
}
