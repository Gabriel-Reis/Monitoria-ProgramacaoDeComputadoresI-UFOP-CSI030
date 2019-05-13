#include <stdio.h>
/*
              *****                   AULA 04                   *****
              *****  EX. 2) LER 2 números E DIZER QUAL É MAIOR  *****
*/
int main (){

int x,y;

    printf ("Digite dois numeros: ");
    scanf ("%d %d", &x, &y);

        if (x>y)
            printf ("%d e maior que %d",x,y);
        else
            printf ("%d e maior que %d",y,x);

return 0;
}

