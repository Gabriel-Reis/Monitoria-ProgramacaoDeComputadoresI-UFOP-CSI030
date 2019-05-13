#include <stdio.h>
#include <stdlib.h>

struct registroaluno{
    char nome [50];
    int idade;
    char sexo;
    int turma;
};


int main(){

    struct registroaluno aluno;

    printf ("Digite o nome do aluno: ");
    gets(aluno.nome);

    printf ("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);

    printf ("Digite o genero do aluno: ");
    scanf(" %c", &aluno.sexo);

    printf ("Digite a turma do aluno: ");
    scanf("%d", &aluno.turma);

    system("cls");

    puts(aluno.nome);
    printf ("Idade do aluno: %d", aluno.idade);
    printf ("\nGenero do aluno: %c", aluno.sexo);
    printf ("\nTurma do aluno: %d", aluno.turma);

return 0;
}
