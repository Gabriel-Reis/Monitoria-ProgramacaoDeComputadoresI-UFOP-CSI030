#include <stdio.h>

void imprimemaior (int x, int y){
if (x>y)
    printf ("%d",x);
else
    printf ("%d", y);
}

int main (){
int a,b;
scanf ("%d %d", &a, &b);
imprimemaior (a,b);


return 0;

}
