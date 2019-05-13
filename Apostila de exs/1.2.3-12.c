#include <stdio.h>
int main(void){

float c;

printf("Digite a temperatura em Celsius: ");
scanf("%f",&c);

system ("cls");
printf("\n%.2f C, equivale a %.2f",c,(c*1.8+32));

return 0;

}

