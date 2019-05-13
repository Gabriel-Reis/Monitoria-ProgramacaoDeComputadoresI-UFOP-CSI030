#include <stdio.h>
#include <stdlib.h>
struct aluno{
    char nome[30];
    char curso[30];
    int idade;
};

int main(){

    struct aluno aluno1;

    printf("Digite o nome do aluno: ");
    gets(aluno1.nome);
    printf("Digite o curso do aluno: ");
    gets(aluno1.curso);
    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno1.idade);

    system ("cls");

    printf("Nome do aluno: ");
    puts(aluno1.nome);
    printf("Curso: ");
    puts(aluno1.curso);
    printf("Idade: %d", aluno1.idade);

return 0;
}
