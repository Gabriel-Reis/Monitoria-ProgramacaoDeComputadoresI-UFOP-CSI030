/**
        Gabiel Augusto Requena dos Reis - 16.2.8105
        Sistemas de informacao - CSI030
*/

#include <stdio.h>
#include <ctype.h>


int main (){

    char seq [10];
    int i;

    printf ("Digite uma sequencia de ate 10 caracteres: ");
    gets (seq);

    for (i=0; i<=10; i++)
    {
        putchar (toupper(seq[i]));
    }

return 0;
}
