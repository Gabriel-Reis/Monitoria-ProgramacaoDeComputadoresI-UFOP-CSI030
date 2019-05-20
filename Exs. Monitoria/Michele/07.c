#include <stdio.h>

int main (void){

    float salario, maiorsalario = -99999;
    printf("Digite o salario: \n");

    while(salario != -999){

        scanf("%f",&salario);

        if (salario > maiorsalario && salario != -999)
            maiorsalario = salario;
    }
    printf("O maior salario e: %.2f\n",maiorsalario);

return 0;
}
