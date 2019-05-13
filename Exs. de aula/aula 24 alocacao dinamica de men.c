#include <stdio.h>
#include <stdlib.h>

//Inicializa valores do vetor em '0' e demanda mais tempo
//void calloc (int blocos, int tamanho){};
//Inicializa valores do vetor com lixos de memoria, mas executa mias rapidamente
//void* malloc(int qntd_bytes){};

int main(){

    int i, *p=NULL, *q=NULL;
    p = (int*) calloc(5, sizeof(int));
    q = (int*) malloc(5*sizeof(int));

    for (i=0; i<5;i++)
        {
        p[i] = 1;
        q[i] = 2;
        }

    free(p);free(q);

return 0;
}
