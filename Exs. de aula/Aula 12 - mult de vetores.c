#include <stdio.h>

int main (){

int x [5]; /* 0 a 4 */
int y [5];
int soma = 0;
int i;
int pi = 0;

    printf("Digite os 5 valores de x: \n");
for (i=0; i<5; i++){
    scanf ("%d" ,&x[i]);
    }

    printf("Digite os 5 valores de y: \n");
for (i=0; i<5; i++){
    scanf ("%d" ,&y[i]);
    }

    printf("a multiplicacao dos itens e: \n");
for (i=0; i<5; i++){
    printf("%d\t" ,(x[i]*y[i]));
    }

for (i=0; i<5; i++){
    pi += (x[i]*y[i]);
    }
    printf("\no produto interno e: %d\n", pi);

}
