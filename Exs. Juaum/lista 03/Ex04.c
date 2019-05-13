#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, n, *p, countp=0, counti=0;

    printf("Digite a quantidade de valores:");
    scanf("%d", &n);

    p =  malloc (n * sizeof(int));

    for (i=0; i<n; i++)
    {
        printf("Digite um valor:  ");
        scanf("%d", &p[i]);
        if (p[i] % 2 == 0)
            countp += 1;
        else
            counti += 1;
    }

    printf("Existem %d numeros impares e %d numeros pares.", counti, countp);

    free(p);
return 0;
}
