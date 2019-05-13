#include <stdio.h>
/*
              *****            AULA 04               *****
              *****  EX. 1) LER X E DIZER SE X > 20  *****
*/
int main (){

int x;

    printf ("Digite um numero: ");
    scanf ("%d", &x);

if (x>20)
    printf ("\nX e maior que 20\n");
else
    printf ("\nX nao e maior que 20\n");


return 0;
}
