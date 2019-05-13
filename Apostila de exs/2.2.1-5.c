#include <stdio.h>

int main (void){

int x,y,z;

printf ("Digite tres numeros: \n");
scanf ("%d%d%d", &x,&y,&z);

    if ((x>y)&&(x>z))
        printf (" O maior numero e: %d", x);
    if ((y>z)&&(y>x))
        printf (" O maior numero e: %d", y);
    if ((z>x)&&(z>y))
        printf (" O maior numero e: %d", z);


return 0;
}
