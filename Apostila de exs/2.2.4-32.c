#include <stdio.h>

int main (void){

int n;
int pos = 0;
int neg = 0;
int op = 0;
int soma = 0;
int qnt = 0;
float ppos, pneg;

while (op == 0){
    printf ("Digite um numero: ");
    scanf ("%d", &n);
    if (n>0)
        {
        qnt++;
        soma+=n;
        pos++;
        }
    if (n<0)
        {
        qnt++;
        soma+=n;
        neg++;
        }
    if (n==0)
        break;
}

printf ("\n\nA media e: %d\n",soma/qnt);
printf ("%d valores positivos\n",pos);
printf ("%d valores negativos\n",neg);
ppos = pos*(100/qnt);
pneg = neg*(100/qnt);
printf ("%.2f%c  valores positivos\n", ppos,37);
printf ("%.2f%c  valores negativos.\n\n",pneg,37);

return 0;
}
