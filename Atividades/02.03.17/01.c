/*
            GABRIEL AUGUSTO REQUENA DOS REIS    -   16.2.8105   -   UFOP/JM (SI)
*/

#include <stdio.h>

int main (){

    char nome[10][31];
    float nota[10][3], media[10];
    int i,j;

    //ARMAZENA NOMES E NOTAS DE CADA ALUNO
    for (i=0; i<10; i++)
    {
        printf("Digite o nome do %d Aluno:  ", i+1);
        scanf ("%s", nome[i]);

        for (j=0; j<3; j++)
        {
            printf("Digite a %d nota do Aluno %s:   ",j+1,nome[i]);
            scanf("%f", &nota[i][j]);
        }
        //CALCULA A MEDIA DE CADA ALUNO
        media[i] = (((nota[i][0])+(nota[i][1])+(nota[i][2]))/3);
    }

//EXIBE RESULTADOS
    /*
    FORMATO DA EXIBIÇÃO:
    ------------------------------------------------------
    1   ALUNO1  NOTA1   NOTA2   NOTA3   MEDIA   APROVACAO
    ------------------------------------------------------
    */

    printf("\n-----------------------------------------------------------------------\n");
    printf("N \t NOME \t N1 \t N2 \t N3 \t MEDIA \t Status \t");
    for (i=0; i<10; i++)
    {
        printf("\n-----------------------------------------------------------------------\n");
        printf("%d \t %s \t %.2f \t %.2f \t %.2f \t %.2f \t", i+1, nome[i], nota[i][0], nota[i][1], nota[i][2], media[i]);

        if (media[i]>= 6)
            printf("APROVADO \n");
        if (media[i]<6)
            printf("REPROVADO \n");
    }

return 0;
}
