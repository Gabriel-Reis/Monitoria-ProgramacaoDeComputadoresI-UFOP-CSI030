#include <stdio.h>

int main () {

int a, b, c;

printf("Digite o valor das laterais do triangulo: \n");
scanf ("%d%d%d", &a, &b,&c);

    if ((a+b>c)&&(a+c>b)&&(b+c>a)&&((a+b)>abs(a-b))&&((a+c)>abs(a-c))&&((b+c)>abs(b-c)))
    {
        if ((a==b)&&(b==c))
        printf("\n\nO triangulo e equilatero");
        else if (((a==b)&&(b!=c))||((a==c)&&(c!=b))||((b==c)&&(c!=a)))
        printf ("\n\nO triangulo e isoceles");
        else if ((a!=b)&&(b!=c))
        printf ("\n\nO triangulo e escaleno");
    }
    else
        printf ("este triangulo nao pode ser contruido, \npois nao  satisfaz as condicoes de existencia");


    return 0;
}
