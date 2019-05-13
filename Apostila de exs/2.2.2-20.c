#include <stdio.h>

int main (void){

int funcionario;


printf ("Digite o codigo do funcionario\n");
scanf("%d", &funcionario);

switch (funcionario)
{
    case 101:
        printf ("%d corresponde ao Vendedor", funcionario);
        break;
    case 102:
        printf ("%d corresponde ao Atendente", funcionario);
        break;
    case 103:
        printf ("%d corresponde ao Auxiliar tecnico", funcionario);
        break;
    case 104:
        printf ("%d corresponde ao Assistente", funcionario);
        break;
    case 105:
        printf ("%d corresponde ao Coordenador de grupo", funcionario);
        break;
    case 106:
        printf ("%d corresponde ao Gerente", funcionario);
    default:
        printf ("funcionario nao cadastrado");
}
return 0;
}
