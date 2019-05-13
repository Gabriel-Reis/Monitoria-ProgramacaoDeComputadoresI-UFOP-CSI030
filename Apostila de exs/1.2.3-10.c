#include <stdio.h>
int main(void){

int a,b,c;

printf("Digite tres numeros para calcular a media: ");
scanf("%d%d%d",&a,&b,&c);

printf("valores digitados:\n");
printf("A = %d, B = %d e C = %d \n", a, b, c);
printf("A media e %d ", (a+b+c)/3);

return 0;

}
