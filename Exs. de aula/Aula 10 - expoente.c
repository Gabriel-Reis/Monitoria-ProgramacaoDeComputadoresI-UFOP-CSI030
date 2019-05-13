#include <stdio.h>


int expoente (int base, int expo){
    int i, n;
    n = 1;
    for (i=1; i<=expo; i++)
        n=n*base;
return n;
}


int main (void){
    int n,base,expo;
    printf ("Digite a base e o expoente do numero a ser clculado:");
    scanf ("%d %d", &base, &expo);
    n = expoente(base,expo);
    printf ("%d", n);

return 0;
}
