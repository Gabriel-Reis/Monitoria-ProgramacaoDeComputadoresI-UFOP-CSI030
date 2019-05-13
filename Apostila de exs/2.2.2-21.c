#include <stdio.h>

int main (void){

float nota;


printf ("Digite a nota do aluno\n");
scanf("%f", &nota);

    if ((nota <= 10)&&(nota >= 9))
        printf("Conceito A");
    else if ((nota <= 8)&&(nota >= 7))
        printf("Conceito B");
    else if ((nota <= 6)&&(nota >= 5))
        printf("Conceito C");
    else if (nota < 5)
        printf("Conceito D");




return 0;
}
