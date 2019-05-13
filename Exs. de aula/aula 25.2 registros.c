#include <stdio.h>
#include <stdlib.h>

struct registroaluno{
    char nome [50];
    int idade;
    char sexo;
};


int main(){

    struct registroaluno aluno[3];
    int i;

    for (i=0; i<3; i++)
    {
        printf ("Digite o nome do aluno: ");
        gets(aluno[i].nome);
        printf ("Digite a idade do aluno: ");
        scanf("%d", &aluno[i].idade);
        printf ("Digite o genero do aluno: ");
        scanf(" %c", &aluno[i].sexo);
    }
    system("cls");

    for(i=0; i<3; i++)
    {
        puts(aluno[i].nome);
        printf ("Idade do aluno: %d", aluno[i].idade);
        printf ("\nGenero do aluno: %c", aluno[i].sexo);
    }

return 0;
}
