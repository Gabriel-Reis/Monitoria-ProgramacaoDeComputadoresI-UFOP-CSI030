#include <stdio.h>

int main (void){

    int n, result, i, n1=0, n2=1;

    printf("Digite quantos termos deseja exibir da sequencia de Fibonacci.      ");
    scanf("%d", &n);
    printf("0 \n1 \n");

    for(i=3; i<=n; i++){
        result = n1 + n2;
        printf("%d\n", result);
        n1 = n2;
        n2 = result;
    }
}
