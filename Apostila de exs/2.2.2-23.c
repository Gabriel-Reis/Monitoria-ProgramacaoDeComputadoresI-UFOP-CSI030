#include <stdio.h>

int main (void){

char conta, es;
float a,b;
int op;

while (op<= 10){
system ("cls");
printf("Digite a conta desejada:(+,-)      ");
scanf("%f %c %f", &a, &conta, &b);

        if (conta == '+')
            printf("%.2f %c %.2f = %.2f",a, conta, b, a+b);
        else if (conta == '-')
            printf("%.2f %c %.2f = %.2f",a, conta, b, a-b);
        else
            printf("Operacao invalida");

        printf ("\nDeseja fazer outra conta (s/n)?");
        scanf (" %c", &es);
            if ((es =='s')||(es=='S'))
                op = 1;
            else
                op =+ 20;
    }

return 0;
}
