#include <stdio.h>
/*
              *****                 CALCULADORA MEDIEVAL                 *****
              *****Gabriel Augusto Requena dos Reis - Matricula: 16.2.8105*****
*/

int main (void){

int x,y,escolha;
    printf ("Bem vindo a calculadora medieval:\n");
    printf ("Insira um valor:");
    scanf ("%d",&x);
    printf ("Insira outro valor:");
    scanf ("%d",&y);

    printf ("\n\nInsira a operacao desejada:\n");
    printf ("1 para soma / 2 para subtracao / 3 para multiplicacao\n");
    printf ("4 para divisao, 5 para media e 6 para o resto da divisao");
    scanf ("%d", &escolha);

    if  (escolha==1)
        printf ("\nA Soma de %d + %d e: %d",x, y, x+y);
    else if (escolha==2)
        printf ("\nA Subtracao de %d - %d e: %d",x, y, x-y);
    else if (escolha==3)
        printf ("\nA multiplicacao de %d * %d e: %d",x, y, x*y);
    else if (escolha==4)
        printf ("\nA divisao de %d / %d e: %d",x, y, x/y);
    else if(escolha==5)
        printf ("\nA media de %d e %d e: %d",x, y, ((x+y)/2));
    else if (escolha==6)
        printf ("\nO o da divisao de %d e %d e: %d",x, y, x%y);
    else
        printf ("\nOperacao Invalida \a\a");


return 0;
}
