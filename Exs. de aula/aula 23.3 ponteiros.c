#include <stdio.h>

int main(){

    int a, b, c, temp;
    int *pa = &a, *pb = &b, *pc = &c;

    printf("Digite o valor de a:  ");
    scanf ("%d", &a);
    printf("Digite o valor de b:  ");
    scanf ("%d", &b);

    temp = *pa;
    *pa = *pb;
    *pb = temp;

    if (*pa > *pb)
        (*pc) = (*pa);
    else
        (*pc) = (*pb);

    printf("a: %d, b: %d, maior: %d", 8pa, *pb, *pc);
return 0;
}
