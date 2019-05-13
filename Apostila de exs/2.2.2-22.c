#include <stdio.h>

int main (void){

char escala;
float temp;

system ("cls");
    printf("Bem vindo ao programa de conversao de temperatura\n");
    printf("Digite a temperatura e a escala que deseja converter: (c/f): ");
    scanf("%f %c", &temp, &escala);

        if ((escala == 'c')||(escala == 'C'))
            printf("%.2f C corresponde a %.2f F ou %.2f K\n", temp, (temp*1.8+32));
        if ((escala == 'f')||(escala == 'F'))
         printf("%.2f F corresponde a %.2f C ou %.2f K\n", temp,((temp-32)/1.8));

    return 0;
}
