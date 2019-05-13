#include <stdio.h>

int main (void){

long int x,i,soma;
soma = 0;
for (i=1; i<=35000000; i++)
    {
        printf("I = %d\t", i);
        for (x=1; x<=i; x++)
        {
            if (i%x==0)
                soma+=x;
        }
    if ((soma-i) == i) {
        printf ("%d - perfeito\n",i);
        system("pause");
    }
        else
            printf("Nao e perfeito\n");
    soma = 0;
    }

return 0;
}
