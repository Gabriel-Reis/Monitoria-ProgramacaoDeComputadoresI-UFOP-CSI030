#include <stdio.h>

int main(){

    int n,*pn=NULL;

    printf("Digite um valor para n: ");
    scanf("%d", &n);
    pn = &n;

    if ((*pn) > 10)
        *pn = (*pn) * 2;
    if ((*pn) <= 10)
        *pn = (*pn) + 2;

    printf("Valor ficou em: %d", *pn);

return 0;
}
