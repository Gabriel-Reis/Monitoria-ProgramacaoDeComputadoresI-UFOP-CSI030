/**
        Gabiel Augusto Requena dos Reis - 16.2.8105
        Sistemas de informacao - CSI030
*/

#include <stdio.h>

int main () {

int idade, peso;
char nome[20];

    printf("digite seu nome:  ");
    scanf ("%[^\n]s  ", nome);
    printf("Digite sua idade:  ");
    scanf("%d", &idade);
    printf("Digite seu peso:  ");
    scanf("%d", &peso);


    system ("cls");
    if((idade>=18)&&(idade<=67)&&(peso>=50))
    printf("%s, voce pode doar Sangue", nome);
    else
    printf("%s, infelizmente voce nao pode doar sangue", nome);



    return 0;
}
