#include <stdio.h>

int media(int vetor[]){
    int soma = 0,i;
    for (i=0; i<10; i++)
        soma+=vetor[i];

return (soma/10);
}

int main (){
    int vetor[] = {1,2,3,4,5,6,7,8,9,10};

    printf("A media e: %d", media(vetor));

return 0;
}
