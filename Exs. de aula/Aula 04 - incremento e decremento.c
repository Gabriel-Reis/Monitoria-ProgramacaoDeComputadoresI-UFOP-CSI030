#include <stdio.h>
/*
              *****PROVANDO QUE X=Y++ É DIFERENTE DE X=++Y*****
*/
int main (){

int x, y, z, r;

printf("Digite um valor para x: ");
scanf ("%d", &x);
y = x;
z = x;

printf("\n\nse R=X++ \n");
printf("X = %d\n", y);
printf("R = %d \n", r=y++);
printf("X = %d\n\n\n", y);

printf("se R=++X \n");
printf("X = %d\n", z);
printf("Y = %d \n", r=++z);
printf("X = %d\n\n", z);

return 0;
}
