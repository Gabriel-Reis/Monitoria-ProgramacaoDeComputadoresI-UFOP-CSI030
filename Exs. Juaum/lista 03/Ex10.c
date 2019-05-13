#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct time{
    int camisa;
    float peso;
    float altura;
    char n;

};

int main(){

    struct time jog[11];
    int i, np;
    float menor = 9999, pesado = 0;
    char ip;


    for(i=0; i<11; i++)
    {
        printf("Digite a camisa do %d jogador: ",i+1);
        scanf(" %d", &jog[i].camisa);
        printf("Digite o peso do %d jogador: ",i+1);
        scanf(" %f", &jog[i].peso);
        if (jog[i].peso > pesado)
            ip = jog[i].n;
        printf("Digite a altura do %d jogador: ",i+1);
        scanf(" %f", &jog[i].altura);
        if (jog[i].altura < menor)
            np = jog[i].camisa;
        printf("Digite a inicial do %d jogador: ",i+1);
        scanf(" %c", &jog[i].n);
    }

//EXIBIR JOGADORES
    system("cls");
    for(i=0; i<11; i++)
    {
        printf("Jogador de camisa %d", jog[i].camisa);
        printf("\t Peso: %.2f", jog[i].peso);
        printf("\t Inicial: %d", jog[i].n);
        printf("\t Altura: %d", jog[i].altura);
        printf("\n");
    }


    printf("Inicial do jogador mais baixo: %c", ip);
    printf("\n Numero do jogador mais pesado: %d", np);

return 0;
}
