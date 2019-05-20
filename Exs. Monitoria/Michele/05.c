#include <stdio.h>

int main(){
	int n, result, aux = 1;
	printf("Digite um numero: \n");
	scanf("%d",&n);

	while(aux <= n){
		result = aux*n;
		printf("%d * %d = %d \n",aux, n, result);
		aux++;
	}
	return 0;
}