#include <stdio.h>

int main (void){

    float valor = 1, somatotal = 0;
    int positivo = 0, negativo = 0, count = 0;

    while(valor != 0){
        printf("Digite o valor: \n");
        scanf("%f",&valor);

        if(valor != 0){
            somatotal = somatotal + valor;
            count++;

            if(valor > 0){
                positivo++;
            }
            else{
            negativo++;
            }
        }

    }

    printf("A media e: %f\n",somatotal/count);
    printf("Positivos: %d\n",positivo);
    printf("Negativos: %d \n",negativo);
    printf("Percentual positivo e: %.2f \n", (float) (positivo*100)/count);
    printf("Percentual negativo e: %.2f \n", (float) (negativo*100)/count);

    return 0;
}
