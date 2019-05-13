#include <stdio.h>

int main (void){

int x,y;

printf ("Digite dois numeros: \n");
scanf ("%d%d", &x,&y);

    if (x>y)
        printf (" Os numeros em ordem decrescente sao: %d e %d", x,y);
    else
        printf (" Os numeros em ordem decrescente sao: %d e %d", y,x);




return 0;
}
