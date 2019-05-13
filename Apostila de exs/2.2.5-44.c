#include <stdio.h>

int main (void){

int x,op,n,maior,pos;
pos = 1;
maior = -999999;

    printf("Digite 10 numeros inteiros: \n");
    for (op=1; op<=10; op++){
        printf ("Digite o %d numero inteiro:   ",pos);
        scanf("%d", &n);
        pos++;
            if (n>maior)
                maior = n;
    }
    printf ("O maior valor e: %d", maior);
}
