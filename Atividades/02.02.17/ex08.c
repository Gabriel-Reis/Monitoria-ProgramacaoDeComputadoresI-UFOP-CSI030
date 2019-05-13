/**
        Gabiel Augusto Requena dos Reis - 16.2.8105
        Sistemas de informacao - CSI030
*/
#include <stdio.h>

void recebesalario(float sal[], int matricula[]){

    int i;

    for (i=0; i<=9; i++)
    {
        printf ("Digite o matricula do funcionario:  ");
        scanf ("%d", &matricula[i]);
        printf ("Digite o salario do funcionario de matricula %d:  ",matricula[i]);
        scanf ("%f", &sal[i]);
    }

}

void reajuste(float sal[], float saln[], int matricula[], int reaj[]){

    int i;

    for (i=0; i<=9; i++)
    {
        if (matricula[i]%2 == 0)
        {
            saln[i] = sal[i]*1.15;
            reaj[i] = 15;
        }
        else
        {
            saln[i] = sal[i]*1.2;
            reaj[i] = 20;
        }
    }
}

void exiberesult(int matricula[], float sal[], int reaj[], float saln[]){

    int i;

    for (i=0; i<=9; i++)
    {
        printf ("Funcionario %d\n", i+1);
        printf ("\t Matricula: %d\n", matricula[i]);
        printf ("\t Salario Base: R$ %.2f\n", sal[i]);
        printf ("\t Porcentual de aumento: %d\n", reaj[i]);
        printf ("\t Salario corrigido: R$ %.2f\n", saln[i]);
    }

}

int main (){

    int matricula[10], reaj[10];
    float sal[10], saln[10];

    recebesalario(sal, matricula);
    reajuste(sal, saln, matricula, reaj);
    exiberesult(matricula, sal, reaj, saln);


return 0;
}
