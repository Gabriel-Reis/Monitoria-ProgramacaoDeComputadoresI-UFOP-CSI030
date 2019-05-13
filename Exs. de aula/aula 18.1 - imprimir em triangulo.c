#include <stdio.h>

int main(){

    int n,i,j;

    printf("digite o tamanho da tabea de '*'");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        printf("\n");
        for (j=0; j<=i; j++)
            printf("* ");
    }
return 0;
}
