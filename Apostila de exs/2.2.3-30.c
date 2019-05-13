#include <stdio.h>

int main (void){

    float salario, max;
    max = -99999;
    int op = 1;

    while (op = 1) {

    printf("Digite o salario da funcionario: ");
    scanf ("%f", &salario);

        if(salario == -999)
            break;
        if (salario > max)
            max = salario;
    }

    printf ("\n\nMaior salario: %.2f\n\n", max);

return 0;
}
