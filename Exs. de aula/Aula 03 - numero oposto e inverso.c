#include <stdio.h>
int main (void){

int x;

printf (" Insira um numero: ");                 /*Inserção do número para apresentar oposto e inverso */
scanf ("%d", &x);

printf ("\n Seu numero: %d",x );                /*Número escolhido anteriormente*/
printf ("\n Oposto do seu numero: %d", -x);     /*Oposto do número escolhido*/
printf ("\n Inverso do seu numero: %.2f \n\n\n\n\n", ((float)1/(float)x));      /*Inverso do número escolhido*/

    system ("pause");
    system ("cls");             /*Agradecimento*/
    printf ("\n\n\n\n\n\n\n\n\n\n\a\t\t      Obrigado por usar este programa!!\n");
    printf ("\t\tDesenvolvido por: Gabriel Augusto Requena dos Reis\n");
    printf ("\t\t        Sistemas de informacao - UFOP\n\n\n\n\n\n");
    system ("pause");

return 0;
}

