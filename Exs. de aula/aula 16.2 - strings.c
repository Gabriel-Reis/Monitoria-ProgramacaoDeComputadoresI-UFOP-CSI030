#include <stdio.h>
void soletra (char n1[]){

    int i;

    for (i=0; i<=100; i++)
    {
        if (n1[i] == '\0')
            break;
        else
            printf ("%c - ", n1[i]);
    }

}

int main (){

    char n1[101];
    int vog=0;

    printf("Digite o texto:");
    gets(n1);

    soletra(n1);

return (0);
}
