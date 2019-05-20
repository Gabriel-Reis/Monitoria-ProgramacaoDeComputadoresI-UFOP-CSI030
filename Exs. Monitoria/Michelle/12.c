#include <stdio.h>

int contimpar(int n1, int n2){
    int aux,i, count=0;

    if(n1 > n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    for (int i = n1; i <= n2; ++i)
    {
        if(i % 2 != 0)
            count++;
    }

    return count;
}

int main (void){

    printf("Impares entre 1 e 12: %d \n", contimpar(1,12));
    printf("Impares entre 12 e 1: %d", contimpar(12,1));

    return 0;
}
