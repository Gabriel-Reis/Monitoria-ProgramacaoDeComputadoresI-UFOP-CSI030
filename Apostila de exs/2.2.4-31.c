#include <stdio.h>

int main (void){

int n;
int op = 0;
int soma = 0;
int qnt = 0;

while (op == 0){
    printf ("Digite um numero: ");
    scanf ("%d", &n);
    if (n>=0)
        {
        qnt++;
        soma+=n;
        }
    else
        break;

}

printf ("\n\nA media e: %d\n\n",soma/qnt);

return 0;

}
