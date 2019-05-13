#include <stdio.h>

int main (){

int x [5]; /* 0 a 199 */
int i;

    printf("Digite um valor: ");
for (i=0; i<5; i++){
    scanf ("%d" ,&x[i]);
    }

    printf("Os numeros sao: \n");
for (i=0; i<5; i++){
    printf("%d\t" ,x[i]);
    }

}
