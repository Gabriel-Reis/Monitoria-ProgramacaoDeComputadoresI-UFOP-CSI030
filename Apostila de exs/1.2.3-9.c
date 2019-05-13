#include <stdio.h>
int main(void){

int a,b,c;

printf("Digite dois valores: ");
scanf("%d%d",&a,&b);

printf("Antes da troca:");
printf("    A = %d e ", a);
printf("B = %d\n", b);

c = a;
a = b;
b = c;

printf("Apos a troca:");
printf("     A = %d e ", a);
printf("B = %d\n ", b);

return 0;

}
