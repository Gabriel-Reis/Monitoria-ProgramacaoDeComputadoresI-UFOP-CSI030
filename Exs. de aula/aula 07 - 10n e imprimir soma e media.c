#include <stdio.h>

int main (void){

    int i, x, soma, rept, n;
    soma = 0;
    i = 1;
    rept = 0;
    n=1;

    printf ("Quantos numeros deseja somar e calcular a media ?");
    scanf ("%d", &rept);

    while (i <= rept){
      printf ("Informe o %d numero: \n",n);
      scanf("%d", &x);
      i++;
      n++;
      soma +=x;
    }

    printf ("\n\n A soma e: %d \n", soma);
    printf (" A media e: %d \n", soma/rept);

return 0;
}
