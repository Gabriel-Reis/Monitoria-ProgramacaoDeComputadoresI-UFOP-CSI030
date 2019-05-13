#include <stdio.h>

int main (void){

float a, b;
char op;

printf ("Digite a conta que deseja fazer: (2+2)(+,-,*,/) \n");
scanf ("%f %c %f", &a, &op, &b);

    if (op == '+')
    printf ("%.2f %c .2%f = %.2f\n", a, op, b, a+b);
    if (op == '-')
    printf ("%.2f %c %.2f = %.2f\n", a, op, b, a-b);
    if (op == '/')
    printf ("%.2f %c %.2f = %.2f\n", a, op, b, a/b);
    if (op == '*')
    printf ("%.2f %c %.2f = %.2f\n", a, op, b, a*b);

return 0;
}
