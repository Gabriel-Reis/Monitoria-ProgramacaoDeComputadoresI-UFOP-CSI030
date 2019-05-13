#include <stdio.h>

int main (void){

int op = 1;
int n=3;
float teste;

    while (op<=3000000){
    teste = n%3;
        if (teste==0)
            {
            printf ("%d\n",n);
            n++;
            op++;
            }
        if (teste!=0)
            {
            n++;
            op++;
            }
    }

}
