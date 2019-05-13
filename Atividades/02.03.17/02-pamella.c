#include<stdio.h>
#include<math.h>
int main()
{
    int pg,a[30],ai=0,q,i, media=0,var[30];
    float desvio=0,soma=0,desv2=0;
    printf("Digite um numero inicial e uma razão para a PG\n");
    scanf("%d%d",&ai,&q);
    for (i=1;i<=30;i++)
    {
        a[i]=ai*(pow(q,i-1));
        soma=soma+a[i];
        printf("%d\n",a[i]);
    }
    media=soma/30;
    for (i=0;i<30;i++)
    {
        var[i]=pow((a[i]-media),2);
        desv2=desv2+var[i];

    }
    desvio = sqrt(desv2);
    printf("Soma:%f\nMedia:%d\nDesvio Padrao: %.2f\n",soma,media,desv2);

}
