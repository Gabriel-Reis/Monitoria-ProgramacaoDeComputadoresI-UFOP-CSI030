#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct est_aluno
{
 char nome[30];
 float media;
 int faltas;
} aluno;

/* Fa�a um programa que leia informa��es de n alunos em um vetor alocado dinamicamente.
Pergunte ao usu�rio se ele deseja incluir um novo aluno.
Em caso afirmativo, crie espa�o para armazenar este novo aluno.
Em seguida, imprima as informa��es lidas. */

int main (){

    int n;

    printf("Digite a quantidade de alunos:  ");
    scanf("%d", &n);

    malloc (n * sizeof(int));



return 0;
}
