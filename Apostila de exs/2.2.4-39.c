#include <stdio.h>

int main (void){

int n,r,op;
char player1[20];
char player2[20];
op = 1;


srand(time(NULL));
n = (rand() % 1000);

printf("Digite o nome do jogador 1: ");
scanf("%s", player1);
printf("Digite o nome do jogador 2: ");
scanf("%s", player2);



    while (op==1){
/* PLAYER 1 */
system ("cls");
printf("%s, digite um valor entre 1 e 1000:     ",player1);
scanf ("%d", &r);
    if (r>n)
        printf("%d e maior que o numero aleatorio.\n",r);
    if (r<n)
        printf("%d e menor que o numero aleatorio.\n",r);
    if (r==n)
        {system ("cls");
        printf ("Parabens %s, o numero era %d", player1, n);
        break;}
system ("pause");
system ("cls");

/* PLAYER 2 */

printf("%s, digite um valor entre 1 e 1000:     ",player2);
scanf ("%d", &r);
    if (r>n)
        printf("%d e maior que o numero aleatorio.\n",r);
    if (r<n)
        printf("%d e menor que o numero aleatorio.\n",r);
    if (r==n)
        {system("cls");
        printf (" Parabens %s, o numero era %d", player2, n);
        break;}
system ("pause");
system ("cls");
    }


return 0;

}
