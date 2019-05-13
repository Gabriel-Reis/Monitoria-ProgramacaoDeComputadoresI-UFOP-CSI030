#include <stdio.h>

int main (void){

int i,count,a,b,c,d;
a = 1;
b = 3;
c = 20;
d = 19;

printf("a = \n");
    for (i=1; i<=7; i++)
        {printf("%d\t", a);
        a++;}
printf("\nb = \n");
    for (i=1; i<=6; i++)
        {printf("%d\t", b);
        b+=5;}
printf("\nc = \n");
    for (i=1; i<=6; i++)
        {printf("%d\t", c);
        c-=6;}
printf("\nd = \n");
    for (i=1; i<=5; i++)
        {printf("%d\t", d);
        d+=8;}






return 0;
}
