#include <stdio.h>
#include <stdlib.h>

//pede n
//le matricula (int) e salaraio de n funcionarios, armazena em dinamico
//se salaraio par *1,2
// matricula impar *1,25

void leInfos(int *mat, float *sal, int n){
    int i;
    for (i=0;i<n;i++){
        printf("Digite a matricula do funcionario: ");
        scanf("%d",&mat[i]);
        printf("Digite o salario do funcionario: ");
        scanf("%f",&sal[i]);
    }
}

void AplicaAumento(int mat, float* sal){
    float aux = *sal;
    if(mat%2 == 0)
        *sal *= 1.2;
    else
        *sal *= 1.25;

}

void imprimir(int *mat, float *sal, int n){
    int i=0;
    for (i=0;i<n;i++){
        printf("Funcionario %d",i+1);
        printf("Matricula %d",mat[i]);
        printf("\nSalaio base: %.2f",sal[i]);
        if(mat[i]%2 == 0)
            printf("\nPercentual de aumento: %d",20);
        else
            printf("\nPercentual de aumento: %d",25);
        //AplicaAumento(mat[i],sal[i]);
        printf("\nSalarioCorrigido: %.2f\n",sal[i]*1.2);
    }
}


int main (){

    int n,i,*mat;
    float *sal;

    printf("Digite a quantidade de funcionarios: ");
    scanf("%d",&n);

    mat = (int*) malloc(n*sizeof(int));
    sal = (float*) malloc(n*sizeof(float));

    leInfos(mat,sal,n);
    imprimir(mat,sal,n);


    free(mat);
    free(sal);
    printf("\nVetores liberados.");
}
