#include <stdio.h>
#include <math.h>

struct ponto{
    float x;
    float y;
};

int main(){

    struct ponto p1,p2;
    float dist;

    printf("Digite a coordenada x do ponto 1 :  ");
    scanf("%f", &p1.x);
    printf("Digite a coordenada y do ponto 1 :  ");
    scanf("%f", &p1.y);
    printf("Digite a coordenada x do ponto 2 :  ");
    scanf("%f", &p2.x);
    printf("Digite a coordenada y do ponto 2 :  ");
    scanf("%f", &p2.y);

   // recebe_ponto(p1, p2);
    dist = ( sqrt( (p2.x-p1.x) + (p2.y-p1.y)) );

    printf("\n\nDistancia entre os ponto: %.2f", dist);

return 0;
}
