#include <stdio.h>

int main(){

    int n, i, j;

    printf("informe o tamanho da base:   ");
    scanf("%d",&n);

    for(j = 0; j< n; j++)
    {
        for(i = j; i < n; i++)
            printf(" ");
        for(i = j; i >= 0; i--)
            printf("*");
    printf("\n");
    }
return 0;
}
