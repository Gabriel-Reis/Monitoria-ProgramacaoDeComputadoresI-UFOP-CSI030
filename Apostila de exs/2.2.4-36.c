#include <stdio.h>

int main (void){

    int op, pes, salario,filhos,maior,qnt;
    float somamenor100,somafilhos,somasal;
    somasal = 0;
    somafilhos = 0;
    somamenor100 = 0;
    qnt=0;
    maior = -99999;
    op = 1;
    pes = 1;
    while (op==1)
    {
        printf("\nDigite o salario da %d pessoa  ",pes);
        scanf ("%d", &salario);
        if (salario >= 0)
        {
            printf("Quantidade de filhos da %d pessoa  ",pes);
            scanf ("%d", &filhos);
            somasal+=salario;
            somafilhos+=filhos;
            pes++;
            if(salario > maior)
                 maior = salario;
            if(salario < 100)
                 somamenor100++;
        }
            if (salario < 0)
                break;
    }

    printf ("\n\nA cidade tem:\n");
    printf ("uma media de salario de: %.2f\n", somasal/pes);
    printf ("uma media do numero de filhos de: %.2f\n", somafilhos/pes);
    printf ("R$%d como o maior salario\n", maior);
    printf ("%.2f%c por cento de pessoas com salario de ate R$100.\n\n",(somamenor100/pes*100),37);



return 0;
}
