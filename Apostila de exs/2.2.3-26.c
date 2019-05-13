#include <stdio.h>

int main (void){

int x,r,y;
y = 1;

printf("Digite um numero para exibir a tabuada:     ");
scanf("%d", &x);

printf ("Tabuada do %d:\n\n",x);
while (y<=10){

        r=y*x,
        printf("%d * %d = %d \n",y,x,r),
        y++;
    }
return 0;
}
