#include <stdio.h>

int main (void){

    float a, b ,c, delta, x1, x2;

        printf ("\n\n\Insira o valor de A: ");
        scanf ("%f", &a);
        printf ("Insira o valor de B: ");
        scanf ("%f", &b);
        printf ("Insira o valor de C: ");
        scanf ("%f", &c);

        delta=pow(b,2)-4*a*c;
        x1=((-b)+sqrt(delta))/(2*a);
        x2=((-b)-sqrt(delta))/(2*a);

        if (delta<0)
        {
            printf ("\n\n\nValor de Delta: %.2f", delta);
            printf ("\n\nValor de Delta Negativo, impossivel continuar operacao.\n\n");
        }
        else if (delta>0)
        {
            printf ("\n\nValor de Delta = %.2f\n", delta);
            printf ("X1= %.2f \nX2= %.2f\n\n", x1, x2);
        }
        else
        {
            printf ("\n\nValor de Delta = %.2f\n", delta);
            printf ("X1 e X2= %.2f\n\n", x1);
        }
}
