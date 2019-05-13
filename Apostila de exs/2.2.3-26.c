#include <stdio.h>

int main (void){

int x,resp,aux;
aux = 1;

printf("Digite um numero para exibir a tabuada:     ");
scanf("%d", &x);

printf ("Tabuada do %d:\n\n",x);
while (aux<=x){

        resp=aux*x;
        printf("%d * %d = %d \n",aux,x,resp);
        aux++;
    }
return 0;
}
