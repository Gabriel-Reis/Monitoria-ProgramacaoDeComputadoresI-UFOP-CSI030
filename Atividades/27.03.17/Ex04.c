/*
        Gabiel Augusto Requena dos Reis - 16.2.8105
        Sistemas de informacao - CSI030
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct ponto_sup_esq
{
  int x; int y;
};

struct ponto_inf_dir
{
  int x; int y;
};

struct retangulo
{
    struct ponto_sup_esq pse;
    struct ponto_inf_dir pid;
};

int main(void)
{
    float area = 0, per = 0, diag = 0;
    struct retangulo ret;

    printf("Digite o ponto superior esquerdo (X):  ");
    scanf("%d", &ret.pse.x);
    printf("Digite o ponto superior esquerdo (Y):  ");
    scanf("%d", &ret.pse.y);
    printf("Digite o ponto inferior direito (X):  ");
    scanf("%d", &ret.pid.x);
    printf("Digite o ponto inferior direito (Y):  ");
    scanf("%d", &ret.pid.y);

    area = (ret.pse.x - ret.pid.x)*(ret.pse.y - ret.pid.y);
    per = (ret.pse.x - ret.pid.x)*2 + (ret.pse.y - ret.pid.y)*2;
    diag = sqrt( pow((ret.pse.x - ret.pid.x),2) + pow((ret.pse.y - ret.pid.y),2) );

    printf("area do retangulo:  %.2f\n", area);
    printf("Diagonal do retangulo:  %.2f\n", diag);
    printf("perimetro do retangulo:  %.2f\n", per);

    return 0;
}
