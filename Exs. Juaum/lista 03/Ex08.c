#include <stdio.h>
#include <stdlib.h>
struct aluno{
    char nome[30];
    char curso[30];
    float notas[3];
    int idade;
};

int main(){

    struct aluno aluno1;
    int i = 0;
    float media = 0;

    printf("Digite o nome do aluno: ");
    gets(aluno1.nome);
    printf("Digite o curso do aluno: ");
    gets(aluno1.curso);
    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno1.idade);
    for(i=0; i<3; i++)
    {
        printf("Digite a %d nota do aluno: ", i+1);
        scanf("%f", &aluno1.notas[i]);
        media += aluno1.notas[i];
    }
    media = media/3;

    system ("cls");

    printf("Nome do aluno: ");
    puts(aluno1.nome);
    printf("Curso: ");
    puts(aluno1.curso);
    printf("Idade: %d", aluno1.idade);
    if (media >= 6 )
    printf("\n Aluno aprovado");
    else
    printf("\n Aluno reprovado");

return 0;
}

