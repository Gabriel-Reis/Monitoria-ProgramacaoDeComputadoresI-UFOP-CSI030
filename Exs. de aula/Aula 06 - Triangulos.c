#include <stdio.h>

int main (void){
int a, b, c, d;
float p1, p2, p3, A1, A2, A3;
printf("Digite quatro valores entre 0 e 100: ");
scanf ("%d%d%d%d",&a,&b,&c,&d);

p1 = (a+b+c)/2.0;
A1 = (p1*(p1-a)*(p1-b)*(p1-c));
p2 = (a+b+d)/2.0;
A2 = (p2*(p2-a)*(p2-b)*(p2-d));
p3 = (b+c+d)/2.0;
A3 = (p3*(p3-b)*(p3-c)*(p3-d));


    if ((A1>0)||(A2>0)||(A3>0))
    printf("S");
    else
    printf("N");

    return 0;
}
