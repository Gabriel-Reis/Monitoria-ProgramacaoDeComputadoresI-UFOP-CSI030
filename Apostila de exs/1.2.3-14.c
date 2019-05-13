#include <stdio.h>

int main(void){

float r;

printf("Insira o raio da circunferencia: ");
scanf("%f",&r);

system ("cls");
printf("\nPara a circunferencia de raio %.2f\n",r);
printf("A area equivale a %.2f e\n",(3.14*pow(r,2)));
printf("o perimetro equivale a: %.2f\n\n\n", (2*3.14*r));

return 0;

}
