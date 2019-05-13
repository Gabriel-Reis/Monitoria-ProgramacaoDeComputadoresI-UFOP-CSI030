#include <stdio.h>
#include <math.h>

void calcula2grau (int a, int b, int c, float *delta, float *x1, float *x2){

    *delta = pow(b,2) - 4 *a * c;
    *x1 = ((-b) + sqrt(*delta)) / (2 *a);
    *x2 = ((-b) - sqrt(*delta)) / (2 *a);
}


int main (){
    int a,b,c;
    float delta, x1, x2;

    printf ("Informe os valores de A,B e C:\n");
    scanf ("%d %d %d", &a, &b, &c);
    calcula2grau(a, b, c, &delta, &x1, &x2);
    printf ("O resultado e: \n");
    printf ("delta: %.2f\n", delta);
    printf ("x1: %.2f\n", x1);
    printf ("x2: %.2f\n", x2);

return (0);
}
