#include <stdio.h>

int main (void){

int i = 1;
int n = 0;

printf("Digite um numero: ");
scanf("%d", &n);
do{
    printf ("%d\n",i);
    i++;
} while (i <=n); /* condicao executada ao final do comando. Sempre fara o comando uma vez*/

}
