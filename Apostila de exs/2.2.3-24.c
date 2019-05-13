#include <stdio.h>

int main () {

int x, maior, menor, op, n;

op = 1;
n=1;
maior = -9999999;
menor = 9999999;

while (op<=6)
    {
printf ("Digite o %d valor:\n", n);
scanf ("%d", &x);
if (x>maior)
    maior = x;
if (x<menor)
    menor = x;

    op++;
    n++;
    }

printf ("O maior e: %d\n", maior);
printf ("O menor e: %d", menor);


  return 0;
}
