#include <stdio.h>
/*
              *****                      AULA 04                        *****
              *****  EX. 3) LER 3 números E COLOCAR EM ORDEM CRESCENTE  *****
*/
int main (){

int x,y,z;

    printf ("Digite tres numeros: ");
    scanf ("%d %d %d", &x, &y, &z);

        if ((x>y)||(y>z))
            {printf("%d %d %d", x, y, z);}
        if ((x<y)||(y>z))
            {printf("%d %d %d", x, y, z);}
        if ((y>z)||(x>z))
            {printf("%d %d %d", x, y, z);}
        if ((y<z)||(x<z))
            {printf("%d %d %d", x, y, z);}
        if ((z>x)||(y>x))
            {printf("%d %d %d", x, y, z);}
        if ((z>x)||(y<x))
            {printf("%d %d %d", x, y, z);}




return 0;
}

