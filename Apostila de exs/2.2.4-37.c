#include <stdio.h>

int main (void){

int op = 1;
int par = 0;
int impar=0;
int n;
int qnt = 0;
float somapar = 0;
float soman = 0;

    while (op==1)
    {
        printf("Digite um valor:  ");
        scanf ("%d", &n);
        if (n > 0)
        {
            soman+=n;
            qnt++;
            if(n%2==0)
                 {par++;
                 somapar+=n;}
           else
                impar++;
        }
            if (n == 0)
                break;
    }


    printf ("\n%d numeros pares\n", par);
    printf ("%d numeros impares\n", impar);
    printf ("Media dos numeros pares: %.2f\n", somapar/par);
    printf ("Media geral: %.2f\n", soman/qnt);



return 0;
}
