#include <stdio.h>

int main (void){

int x,y,z;

printf ("Digite tres numeros: \n");
scanf ("%d%d%d", &x,&y,&z);

    if ((x<y)&&(x<z))
        {
            if (y<z)
            printf (" Os numeros em ordem crescente sao: %d, %d e %d", x,y,z);
            else
            printf (" Os numeros em ordem crescente sao: %d, %d e %d", x,z,y);
        };
   if ((y<z)&&(y<x))
        {
            if (x<z)
            printf (" Os numeros em ordem crescente sao: %d, %d e %d", y,x,z);
            else
            printf (" Os numeros em ordem crescente sao: %d, %d e %d", y,z,x);
        };
    if ((z<x)&&(z<y))
        {
            if (y<x)
            printf (" Os numeros em ordem crescente sao: %d, %d e %d", z,y,x);
            else
            printf (" Os numeros em ordem crescente sao: %d, %d e %d", z,x,y);
    };



return 0;
}
