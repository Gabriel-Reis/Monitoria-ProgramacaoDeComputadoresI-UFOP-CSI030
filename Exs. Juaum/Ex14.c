#include <stdio.h>
#include <stdlib.h>
#include <aclapi.h>

int main(void)
{
    int i,j,z;
    int soma=0,soma2=0,soma3=0;
    int soma4=0,soma5=0,soma6=0,soma7=0,soma8=0;
    int matriz[3][3];
    printf("Bem vindo ao programa de quadrados magicos\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o elemento A(%d %d) - ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
            if(i==j)
                soma+=matriz[i][j];
        }
    }

    system("cls");
    for(i=0;i<3;i++){
        j=0;
        soma2+=matriz[i][j];
    }
    for(i=0;i<3;i++){
        j=1;
        soma3+=matriz[i][j];
    }
    for(i=0;i<3;i++){
        j=2;
        soma4+=matriz[i][j];
    }
    for(j=0;j<3;j++){
        i=0;
        soma5+=matriz[i][j];
    }
    for(j=0;j<3;j++){
        i=1;
        soma6+=matriz[i][j];
    }
    for(j=0;j<3;j++){
        i=2;
        soma7+=matriz[i][j];
    }
    soma8=matriz[1][3]+matriz[2][2]+matriz[3][1];
    if(soma==soma2&&soma==soma3&&soma==soma4&&soma==soma5&&soma==soma6&&soma==soma7){
        printf("E quadrado magico\n");
    }
    else
        printf("Nao e quadrado magico\n");
    return 0;
}
