#include <stdio.h>

int main (void){

int x = 0;
int qnt;

printf ("Digite a quantidade de impressoes a partir de 1: ");
scanf ("%d", &qnt);

while (x<=qnt)
    {printf ("X = %d\n", x);
    x++;}

return 0;
}
