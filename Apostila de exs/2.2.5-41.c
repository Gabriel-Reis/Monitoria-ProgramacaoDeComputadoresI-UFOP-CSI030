#include <stdio.h>
int main(void){

    int corredores,n,op;
    float tempo,tempo2;
    op = 1;
    tempo = -9999999;
    n = 1;

    printf("Digite o numero de corredores: ");
    scanf("%d", &corredores);

    while (op<=corredores){
    printf("Digite o tempo do %d corredor:   ",n);
    scanf("%f", &tempo2);
        if (tempo2>tempo)
            tempo=tempo2;
    n++;
    op++;
    }

    printf("\nO maior tempo dentre os %d corredores foi: %.2f\n\n\n", corredores, tempo);

}
