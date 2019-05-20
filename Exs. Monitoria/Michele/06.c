#include <stdio.h>

int main (void){

    float y,x;
    int aprox = 2;
    int op = 2;

    printf ("Digite um valor:");
    scanf ("%f", &y);

    printf ("1 aproximacao = %f \n", y/2);
    x = y/2;

    while (op<=25){
    x = (pow(x,2)+y)/(2*x);
    printf ("%d aproximacao = %f \n", aprox,x);
    aprox++;
    op++;
    }


return 0;
}