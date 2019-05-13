#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct est_aluno
{
 char nome[30];
 float media;
 int faltas;
} aluno;

/* Faça um programa que leia informações de n alunos em um vetor alocado dinamicamente.
Pergunte ao usuário se ele deseja incluir um novo aluno.
Em caso afirmativo, crie espaço para armazenar este novo aluno.
Em seguida, imprima as informações lidas. */

int main (){

    int n;

    printf("Digite a quantidade de alunos:  ");
    scanf("%d", &n);

    malloc (n * sizeof(int));



return 0;
}
