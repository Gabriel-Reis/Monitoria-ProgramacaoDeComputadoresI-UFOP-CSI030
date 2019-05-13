#include <stdio.h>

int main (void){
int h,s,m,r;

printf("digite a quantidade de segundos: ");
scanf ("%d", &s);

h= s/3600;
r = s%3600;
m = r/60;
r = r%60;

    printf ("O valor corresponde a: %d horas %d minuitos e %d segundos",h,m,r);


return 0;
}
