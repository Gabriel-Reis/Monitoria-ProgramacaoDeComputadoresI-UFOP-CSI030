#include <stdio.h>
#include <math.h>

float rec(int x,int n){

    if (n == 0)
        return(1);
    else if (n == 1)
        return x;
    else
       return(  (powf(x,n)/n) + rec(x,n-1)  );
}

int main (){

    int x,n;

    printf("Digite um valor para x:  ");
    scanf ("%d", &x);
    printf("Digite outro valor par n:  ");
    scanf ("%d", &n);

    printf("O resultado e igual a: %.2f ",rec(x,n));
return 0;
}
