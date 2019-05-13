/**
        Gabiel Augusto Requena dos Reis - 16.2.8105
        Sistemas de informacao - CSI030
*/


#include <stdio.h>
#include <math.h>

float distancia (int px, int py, int qx, int qy){

    float D=0, p1, p2;

    p1 = (px - qx);
    p2 = (py - qy);

        D = sqrt((pow(p1,2))+(pow(p2,2)));
return (D);
}

int main (void){

    int px, py, qx, qy, d;

    printf("Digite as coordenadas do ponto p: (x,y)");
    scanf("%d", &px);
    scanf("%d", &py);
    printf("Digite as coordenadas do ponto q: (x,y)");
    scanf("%d", &qx);
    scanf("%d", &qy);

    d = distancia (px, py, qx, qy);
    printf("\nDistancia entre os pontos: %d", d);
return 0;
}
