#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p1=NULL, *p2=NULL, i;

    //inicializa ponteiro com 20
    p1 =  calloc (20, sizeof(int));
    for (i=0; i<20; i++)
    {
        printf("Digite um valor:  ");
        scanf("%d", &p1[i]);
        if(p1[i] == 0)
            break;
        else if (p1[19] != 0)
        {
            //inicializa ponteiro com 50 e copia o anterior
            p2 =  calloc (50, sizeof(int));
            for (i=0; i<20; i++)
            {
                p2[i] =p1[i];
            }
            //Continua armazenando valores
            for (i=21; i<50; i++)
            {
                printf("Digite um valor:  ");
                scanf("%d", &p2[i]);
                if(p2[i] == 0)
                    break;
            }
            break;
        }
    }
system("cls");

    for (i=0; i<50; i++)
    {
        if(p2[i] == 0)
        break;
        else
        printf("\n Valor: %d", p2[i]);
    }

    free(p1); free(p2);
return 0;
}
