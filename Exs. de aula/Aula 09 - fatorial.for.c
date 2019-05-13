#include <stdio.h>

int main (void){

int x,y;
long int fat;
fat = 1;

printf("Digite um numero para realizar o fatorial:     ");
scanf("%d", &x);
y = x;

for (y=x; y>=2; y--)
        fat = fat*y;

printf ("O fatorial de %d e: %d",x,fat);
return 0;
}
