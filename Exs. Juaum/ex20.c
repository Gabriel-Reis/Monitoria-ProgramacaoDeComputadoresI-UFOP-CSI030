#include <stdio.h>
#include <stdlib.h>
#include <aclapi.h>
#include <math.h>

int somat(int n)
{
    if(n==1)
        return 1;
    else
        return ((n+1)*0.5*n);
}
int main()
{
    int x;
    printf("Digite um numero\n");
    scanf("%d",&x);
    x=somat(x);
    printf("\n%d",x);
    return 0;
}
