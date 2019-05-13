#include <stdio.h>

int main () {

int x,y;

printf("Digite os valores de um par ordenado: \n");
scanf ("%d%d", &x, &y);

    if (x>0)
    {
        if (y>0)
        printf ("Este par ordenado pertence ao primeiro quadrante.\n\n");
        else if (y<0)
        printf ("Este par ordenado pertence ao quarto quadrante.\n\n");
        else
        printf ("Este par ordenado, nao pertence a um quadrante, pois Y = 0\n\n");
    }
    else if (x<0)
    {
        if (y>0)
        printf ("Este par ordenado pertence ao segundo quadrante.\n\n");
        else if (y<0)
        printf ("Este par ordenado pertence ao terceiro quadrante.\n\n");
        else
        printf ("Este par ordenado, nao pertence a um quadrante, pois Y = 0\n\n");
    }
    else
        printf ("Este par ordenado, nao pertence a um quadrante, pois X = 0\n\n");




    return 0;
}
