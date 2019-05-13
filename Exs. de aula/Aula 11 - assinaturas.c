# include <stdio.h>

int soma (int x, int y); //Assinatura ou prototipo

int main(void){

    int x = 6;
    int y = 7;
    printf("A soma e: %d\n", soma(x,y));
}

int soma (int x, int y){

    return (x+y)
}
