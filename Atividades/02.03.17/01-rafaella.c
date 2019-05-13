#include <stdio.h>
int main () {

int i,tamanho=10;
char nome[tamanho][30];
float nota1[tamanho];
float nota2[tamanho];
float nota3[tamanho];
float media[10];

for (i=0; i<tamanho; i++){

//NOME DO ALUNO
printf("\n\t Ler um nome: ");
scanf("%s", nome[i]);

//NOTAS DO ALUNO
printf("\n\t Digite a nota1: ");
scanf("%f", &nota1[i]);


printf("\n\t Digite a nota2: ");
scanf("%f", &nota2[i]);


printf("\n\t Digite a nota3: ");
scanf("%f", &nota3[i]);

media[i]= (nota1[i] + nota2[i] + nota3[i])/3;
}


for (i=0; i<tamanho; i++){
printf("\n\t Aluno: %s", nome[i]);
printf("\n\t Nota do aluno: %.2f %.2f %.2f ", nota1[i], nota2[i], nota3[i]);
printf("\n\t Media: %.2f", media[i]);

if (media[i]>=6){
printf("\n\tAprovado");

}else {
printf("\n\tReprovado");
}
}

return 0;
}
