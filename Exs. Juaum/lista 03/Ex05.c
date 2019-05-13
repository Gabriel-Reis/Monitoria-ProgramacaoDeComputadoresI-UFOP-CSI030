
#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,j, lot[6], apost[6],count = 0, *p;

    for (i=0; i<6; i++)
    {
        printf("Digite os numeros sorteados na loteria:");
        scanf("%d", &lot[i]);
    }
    for (i=0; i<6; i++)
    {
        printf("Digite os numeros apostados na loteria:");
        scanf("%d", &apost[i]);
    }
    for (i=0; i<6; i++)
        for (j=0; j<6; j++)
        {
            if (lot[i] == apost[j])
                count++;
        }

    p =  malloc (count * sizeof(int));
    for (i=0; i<6; i++)
        for (j=0; j<6; j++)
        {
            if (lot[i] == apost[j])
                p[i] = lot[i];
        }

    system("cls");

    printf("Numeros sorteados:  ");
    for (i=0; i<6; i++)
        {
        printf("\t %d", lot[i]);
        }

    printf("\nNumeros acertados:  ");
    for (i=0; i<count; i++)
        {
        printf("\t %d", p[i]);
        }

    free(p);
return 0;
}
