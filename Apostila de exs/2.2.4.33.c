#include <stdio.h>

int main (void){
int op, pes,idade,peso,soma;
char rpt;
soma = 0;
op = 1;
pes = 1;

    while (op==1){
        printf("Digite a idade e o peso da %d pessoa  ",pes);
        scanf ("%d%d", &idade, &peso);
            if (idade > 30)
                soma+=peso;
            else
                printf("peso ignorado.\n");

    pes++;
    printf ("Deseja informar os valores de outra pessoa (s/n)?   ");
    scanf (" %c", &rpt);
            if ((rpt=='s')||(rpt=='S'))
                op = 1;
            if ((rpt=='n')||(rpt=='N'))
                op = 0;
    }
    printf ("\nSoma dos pesos de pessoas com mais de 30 anos: %d\n\n", soma);
}
