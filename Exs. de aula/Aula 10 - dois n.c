# include <stdio.h>

int calcular (int x, int y){
    int w;
    if (x>y)
        w = x-y;
    else
        w = x+y;

    return w;
}



int main (){

    int x,y,r;
    printf("Informe dois numeros: ");
    scanf ("%d%d", &x, &y);
    r = calcular (x,y);
    printf("O resultado e: %d\n", r);

    return 0;
}
