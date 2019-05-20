#include <stdio.h>

int main(){
	int limitemenor, limitemaior,x;

	printf("Digite tres numeros inteiros: \n");
	scanf("%d%d%d",&limitemenor, &limitemaior, &x);

	if(x >= limitemenor && x <= limitemaior){
		printf("O numero esta dentro do intervalo.");
	}
	else{
		printf("O numero nao esta dentro do intervalo");
	}

	return 0;
}