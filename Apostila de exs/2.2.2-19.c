#include <stdio.h>

int main (void){

int mes;


printf ("Digite um valor entre 1 e 12\n");
scanf("%d", &mes);

switch (mes)
{
    case 1:
        printf ("%d corresponde ao mes de JANEIRO", mes);
        break;
    case 2:
        printf ("%d corresponde ao mes de FEVEREIRO", mes);
        break;
    case 3:
        printf ("%d corresponde ao mes de MARCO", mes);
        break;
    case 4:
        printf ("%d corresponde ao mes de ABRIL", mes);
        break;
    case 5:
        printf ("%d corresponde ao mes de MAIO", mes);
        break;
    case 6:
        printf ("%d corresponde ao mes de JUNHO", mes);
    case 7:
        printf ("%d corresponde ao mes de JULHO", mes);
        break;
    case 8:
        printf ("%d corresponde ao mes de AGOSTO", mes);
        break;
    case 9:
        printf ("%d corresponde ao mes de SETEMBRO", mes);
        break;
    case 10:
        printf ("%d corresponde ao mes de OUTUBRO", mes);
        break;
    case 11:
        printf ("%d corresponde ao mes de NOVEMBRO", mes);
        break;
    case 12:
        printf ("%d corresponde ao mes de DEZEMBRO", mes);
        break;
    default:
        printf ("numero fora do intervalo solicitado");
}
return 0;
}
