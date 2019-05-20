#include <stdio.h>

int main(){
	int codigo;

	printf("digite seu codigo\n");	
	scanf("%d",&codigo);

	switch(codigo){
		case 101:
			printf("vendedor");
			break;
		case 102: 
			printf("atendente");
			break;
		case 103:
			printf("auxiliar tecnico");
			break;
		case 104:
			printf("assitente");
			break;
		case 105:
			printf("Coordenador de grupo");
			break;
		case 106:
			printf("Gerente");
			break;
		default:
			printf("codigo invalido");
	}
	return 0;
}