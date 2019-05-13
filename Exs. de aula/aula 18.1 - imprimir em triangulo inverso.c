#include <stdio.h>

int main(){

    int base, i, j;

    printf("O programa deve imprimir um triangulo invertido, informe o tamanho da base:   ");
    scanf("%d",&base);

    for(j = 0; j< base; j++){
        for(i = j; i < base; i++)
            printf(" ");
        for(i = j; i >= 0; i--)
            printf("*");
    printf("\n");

}
return 0;
}
