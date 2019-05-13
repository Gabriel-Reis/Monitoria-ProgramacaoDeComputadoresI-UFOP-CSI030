#include <stdio.h>
int main(void){

int n;
int soma = 0;

    printf("Para parar a soma, insira 0\n");
    printf("Digite um valor para somar:    ");
    scanf("%d",&n);
    soma+=n;
do {
    printf("Digite um valor para somar:    ");
    scanf("%d",&n);
    soma+=n;
}while (n!=0);

    printf ("A soma e: %d",soma);

return (0);
}
