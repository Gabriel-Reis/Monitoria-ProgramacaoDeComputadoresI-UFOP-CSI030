#include <stdio.h>

int main(){
	float peso, altura, imc;

	printf("digite o seu peso e a sua altura: \n");
	scanf("%f%f",&peso,&altura);

	imc = peso / (altura * altura);

	if(imc >= 20 && imc < 25){
		printf("Peso normal");
	}
	else if(imc >= 25 && imc < 30){
		printf("Sobrepeso");
	}
	else if (imc >= 30 && imc < 40)
	{
		printf("Obesidade");
	}
	else if (imc >= 40)
	{
		printf("Obesidade morbida");
	}

	return 0;
}