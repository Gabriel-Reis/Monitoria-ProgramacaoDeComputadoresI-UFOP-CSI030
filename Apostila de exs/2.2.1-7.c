#include <stdio.h>

int main (void){

int x;

printf ("Digite um numero: \n");
scanf ("%d", &x);

    if (x>0)
        printf (" O  numero e positivo");
    if (x==0)
        printf (" O  numero e nulo");
    if (x<0)
       printf (" O  numero e menor");


return 0;
}
