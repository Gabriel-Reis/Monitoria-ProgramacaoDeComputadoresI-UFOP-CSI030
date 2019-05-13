#include <stdio.h>

void lerstring(char nome[][], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("Informe o nome do '%d' aluno:", i+1);
        scanf("%s", nome[i]);
    }
}


void preenche(char nome[], float nota1[], float nota2[], float nota3[], int tam)
{
    int i;

    for(i = 0; i < tam; i++)
    {
        printf("Digite a primeira nota do aluno %s:\n", nome[i]); // Add o [i] no nome
        scanf("%f", &nota1[i]);
        printf("Digite a segunda nota do aluno %s:\n", nome[i]);  // Add o [i] no nome
        scanf("%f", &nota2[i]);
        printf("Digite a terceira nota do aluno %s:\n", nome[i]); // Add o [i] no nome
        scanf("%f", &nota3[i]);
    }
    printf("\n\n");
}

void med(float nota1[], float nota2[], float nota3[], float media[], int tam)
{

    int i;
    for(i=0; i<tam; i++);
    {
        media[i] = (nota1[i]+nota2[i]+nota3[i])/3;
    }
}

void exibe (char nome[], float nota1[], float nota2[], float nota3[], float media[], int tam)
{
    int i;

    for(i = 0; i < tam; i++)
    {
        printf("%d %s %f %f %f", i, nome[i], nota1[i], nota2[i], nota3[i], media[i]); //ADD os [i] e separar do IF
        if(media[i] >= 6)
        printf("Aprovado\n");
        else
        printf("Reprovado\n");
    }
}


int main ()
{

    char nome[10][30]; //adicionado [10] para serem 10 nomes com 30 espaços
    float nota1[10], nota2[10], nota3[10], media[10];

    lerstring(nome, 10);
    preenche(nome, nota1, nota2, nota3, 10);
    med(nota1, nota2, nota3, media, 10);
    exibe(nome, nota1, nota2, nota3, media, 10);


    return 0;
}
