#include <stdio.h>

int main () {

float salario;

printf("Informe o salario: ");
scanf ("%f", &salario);


    if (salario < 750*1.5)
    {printf ("O aumento sera de 30 por cento\n");
    printf ("O novo salario de %.2f", salario*1.3);}
    else
    printf ("Nao havera aumento de salario\n");

    return 0;
}
