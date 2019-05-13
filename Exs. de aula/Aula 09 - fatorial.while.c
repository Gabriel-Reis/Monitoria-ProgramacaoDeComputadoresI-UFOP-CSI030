#include <stdio.h>

int main (void){

int x,y,fat;
fat = 1;

printf("Digite um numero para realizar o fatorial:     ");
scanf("%d", &x);
y = x;

while (y>=2){
        fat = fat*y;
        y--;
    }
printf ("O fatorial de %d e: %d",x,fat);
return 0;
}
