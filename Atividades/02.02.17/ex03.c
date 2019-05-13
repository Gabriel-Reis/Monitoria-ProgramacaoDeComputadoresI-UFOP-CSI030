/**
        Gabiel Augusto Requena dos Reis - 16.2.8105
        Sistemas de informacao - CSI030
*/

#include <stdio.h>

int main (void){

    char escala;
    float temp;

    printf("Bem vindo ao programa de conversao de temperatura\n");
    printf("Digite a temperatura e a escala que deseja converter: (c/f): ");
    scanf("%f %c", &temp, &escala);

    if ((escala == 'c')||(escala == 'C'))
        printf("%.2f C corresponde a %.2f F \n", temp, (temp*1.8+32));
    if ((escala == 'f')||(escala == 'F'))
        printf("%.2f F corresponde a %.2f C\n", temp,((temp-32)/1.8));

    return 0;
}
