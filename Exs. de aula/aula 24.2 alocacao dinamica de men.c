/*
- Cria 1 vetor (p) int de tamanho n
- Cria 1 vetor (q) float de tamanho n
- Verifica se há espaço na memória
- p recebe i+5 e Q recebe i/3
- imprime p e q
- desaloca espaço de p e q
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, n, *p=NULL;
    float *q=NULL;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    p = (int*) malloc(n * sizeof(int));
    q = (float*) malloc(n * sizeof(float));

    if (p == NULL || q == NULL)
    {
        printf("Memoria insulfiente.");
        return -1;
    }

    for (i=0; i<n; i++)
    {
        p[i] = i+5;
        q[i] = i/3.0;
        printf("P: %d \t Q: %.2f \n",p[i], q[i]);
    }

    free(p);free(q);

return 0;
}
