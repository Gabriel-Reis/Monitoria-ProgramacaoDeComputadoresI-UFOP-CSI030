#include <stdio.h>

int main () {

int a,b;

printf("Digite dois valore entre 1 e 10\n");
scanf ("%d%d", &a,&b);

    if (a+b<8)
        printf ("A media e %d", ((a+b)/2));
    else if (a+b==8)
        printf ("O produto e %d", a*b);
    else
    {
        if (a>b)
        printf ("a/b = %d", a/b);
        else
        printf ("b/a = %d", b/a);
    }



    return 0;
}
