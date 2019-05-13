#include <stdio.h>

int main (void)
{
    int i =0;
    char nome[10][30];
    float nota1[10];
    float nota2[10];
    float nota3[10];
    float media[10];

    printf ("Digite o nome do aluno:\n");
    scanf ("%s",nome[i]);

    printf ("Digite o valor da primeira, da segunda e da terceira nota, respectivamente:\n");
    scanf ("%f%f%f", &nota1[i],&nota2[i],&nota3[i]);

    media[i] = ((nota1[i] + nota2[i] + nota3[i])/ 3);

    printf ("O aluno %s tem notas %.2f, %.2f, %.2f e media %.2f e esta: ", nome[i],nota1[i],nota2[i],nota3[i], media[i]);

    if (media[i] < 6.0)
    {
        printf (" Reprovado(a)");
    }

    else
    {
        printf (" Aprovado(a)");
    }

    return 0;
}

