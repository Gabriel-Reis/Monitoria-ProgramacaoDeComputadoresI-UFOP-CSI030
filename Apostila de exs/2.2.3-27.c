#include <stdio.h>

int main (void){

int valor,i,count,n;
n=1;
count = 0;

for (i=1; i<=10; i++)
{
    printf("Digite o %d valor",n);
    scanf ("%d", &valor);
    if ((valor<=20)&&(valor>=10))
        {count ++;
        n++;}
    else
        n++;
}
    printf("%d numeros digitados estao no intervalo [10,20] e \n",count);
    printf("%d numeros digitados nao estao no intervalo [10,20]",10-count);
return 0;
}
