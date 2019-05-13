#include <stdio.h>

void nrepetidos(float veta[5], float vetb[8]){

    int i,j;

    for (i=0; i<5; i++)
        for (j=0; j<8; j++)
            if (veta[i] == vetb[j])
                printf(" %.2f -", veta[i]);
}


int main (){

    int i;
    float veta[5],vetb[8];

    for(i=0; i<5; i++)
    {
        printf("Digite o valor %d do primeiro vetor:  ", i+1);
        scanf("%f", &veta[i]);
    }

    printf("\n\n");

    for(i=0; i<8; i++)
    {
        printf("Digite o valor %d do segundo vetor:  ", i+1);
        scanf("%f", &vetb[i]);
    }

    nrepetidos(veta, vetb);

return 0;
}
