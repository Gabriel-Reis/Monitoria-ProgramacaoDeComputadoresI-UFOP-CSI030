#include <stdio.h>

int main(){
	float a, b, area, perimetro;

	printf("Digite um valor para base: \n");
	scanf("%f",&b);

	printf("Digite um valor para altura: \n");
	scanf("%f",&a);

	area = a*b;

	printf("a area do retangulo e: \n %.2f",area);

	perimetro = (2*a)+(2*b);

	printf("\n O perimetro do retangulo e: \n %.2f",perimetro);

	return 0;
}
