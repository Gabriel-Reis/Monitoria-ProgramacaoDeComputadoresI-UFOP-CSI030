#include <stdio.h>

int main () {

int a, b, op;

printf("Bem vindo a calculadora:\n");
printf("Selecione a opcao desejada:\n");
printf("1 - Soma\n");
printf("2 - Subtracao\n");
printf("3 - Multiplicacao\n");
printf("4 - Divisao\n");
printf ("Opcao desejada:   ");
scanf ("%d", &op);

    if (op == 1)
    {printf ("Digite os 2 valores para realizar a soma:\n");
    scanf ("%d%d", &a, &b);
    printf ("\n\n%d + %d = %d", a, b, a+b);}
    else if (op == 2)
    {printf ("Digite os 2 valores para realizar a subtracao:\n");
    scanf ("%d%d", &a, &b);
    printf ("\n\n%d - %d = %d", a, b, a-b);}
    else if (op == 3)
    {printf ("Digite os 2 valores para realizar a multiplicacao:\n");
    scanf ("%d%d", &a, &b);
    printf ("\n\n%d * %d = %d", a, b, a*b);}
    else if (op == 4)
    {printf ("Digite os 2 valores para realizar a divisao:\n");
    scanf ("%d%d", &a, &b);
    printf ("\n\n%d / %d = %d", a, b, a/b);}
    else
    printf ("Opcao invalida");

    return 0;
}
