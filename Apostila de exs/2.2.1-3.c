#include <stdio.h>

int main (void){

int x;

printf ("Digite um numero: \n");
scanf ("%d", &x);

    if (x>20)
    printf ("O numero %d e maior que 20", x);
    else if (x==20)
    printf ("O numero %d e igual a 20", x);
    else
    printf ("O numero %d e menor que 20", x);


return 0;
}
