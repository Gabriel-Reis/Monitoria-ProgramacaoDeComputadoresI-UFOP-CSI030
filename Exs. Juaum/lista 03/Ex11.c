#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct veic{
    char nome[30];
    char placa[8];
    char cor[15];
    char turno;

};

int main (){

    int qnt = 100,i;
    struct veic carro[qnt];

    for (i=0; i<qnt; i++)
    {
        printf("Ditite o condutor do %d veiculo:",i+1);
        scanf(" %s", &carro[i].nome);
        printf("Ditite a placa do %d veiculo:",i+1);
        scanf(" %s", &carro[i].placa);
        printf("Ditite a cor do %d veiculo:",i+1);
        scanf(" %s", &carro[i].cor);
        printf("Ditite o turno do %d veiculo:",i+1);
        scanf(" %c", &carro[i].turno);
        system("cls");
    }

    for (i=0; i<qnt; i++)
    {
        printf("\n\n condutor do %d veiculo:",i+1);
        puts(carro[i].nome);
        printf("placa do %d veiculo:",i+1);
        puts(carro[i].placa);
        printf(" cor do %d veiculo:",i+1);
        puts(carro[i].cor);
        printf(" turno do %d veiculo:",i+1);
        printf("%c", carro[i].turno);
    }
return 0;
}
