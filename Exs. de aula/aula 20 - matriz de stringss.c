#include <stdio.h>

int main () {

    char strings[5][30]; //Quantidade e tamanho da string
    int i;

    for (i=0; i<5; i++)
        scanf ("%s", strings[i]);

    for (i=0; i<5; i++)
        printf("string[%d] = %s \n", i+1, strings[i]);

return 0;
}
