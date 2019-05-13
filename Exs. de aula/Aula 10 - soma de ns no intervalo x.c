#include <stdio.h>

int somaintervalo (int n1, int n2){
    int i,r;
    if (n1 > n2)
    {
        for (i=n2; i<=n1; i++)
        r = r + i;
    }
    if (n2 > n1)
    {
        for (i=n1; i<=n2; i++)
        r = r + i;
    }
return r;
}


int main (void){
    int n1, n2;
    printf("Digite dois valores: ");
    scanf ("%d %d", &n1, &n2);
    printf("O resultado da soma dos n no intervalo e: %d", somaintervalo(n1,n2));

return 0;
}

