#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto{
    int x;
    int y;
};

int main(){

    struct ponto p1,p2;
    float dist = 0;

    printf("Digite a coordenada x de P1:  ");
    scanf("%d", &p1.x);
    printf("Digite a coordenada y de P1:  ");
    scanf("%d", &p1.y);
    printf("Digite a coordenada x de P2:  ");
    scanf("%d", &p2.x);
    printf("Digite a coordenada y de P2:  ");
    scanf("%d", &p2.y);

    dist = sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
    printf("Distancia entre pontos: %.2f", dist);

return 0;
}
