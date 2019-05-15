#include <stdio.h>

int main (void){
    double result =0;
    int i,n;

    printf("Digite um numero");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        if(i%2==0)
            result += (double) 1/(i*2+1);
        else
            result -= (double) 1/(i*2+1);
    }
    printf("Resultado: %f aproximacoes: %d",result,i);
    return 0;
}
