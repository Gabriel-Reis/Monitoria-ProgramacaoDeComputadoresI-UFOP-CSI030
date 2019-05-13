#include <stdio.h>

int main (void){

int repeat,aux,op;
int x = 0;
int y = 1;


printf("Digite quantos termos deseja exibir da sequencia de Fibonacci.      ");
scanf("%d", &repeat);

system ("cls");
printf("Sequencia de Fibonacci: \n");
for(op=1; op<=repeat; op++)
    {aux = x + y;
    x = y;
    y = aux;
printf("%d\n", aux);}

}
