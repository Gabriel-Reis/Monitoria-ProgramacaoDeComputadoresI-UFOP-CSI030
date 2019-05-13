#include <stdio.h>

int main (void){

    int i, x, maior, menor;

    maior = -9999999;
    menor =  9999999;
    i = 0;

    while (i <= 5){ /* varia de 0 a 5 (6 valores), se i = 1, seria (while (i<=6)) */

      printf ("Informe um numero: \n");
      scanf("%d", &x);

      if (x > maior) {
        maior = x;
      }

      if (x < menor) {
        menor = x;
      }

      i++;

    }

    printf ("\n\n O maior valor e: %d \n", maior);
    printf (" O menor valor e: %d \n", menor);



return 0;
}
