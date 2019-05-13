/**
        Gabiel Augusto Requena dos Reis - 16.2.8105
        Sistemas de informacao - CSI030
*/


#include <stdio.h>
#include <math.h>

int padraoCodigo (char codigo[], int n, char a, char b, char c){

    int i, count = 0;

    for (i=0; i<n-2; i++)
    {
        if ((codigo[i]==a)&&(codigo[i+1]==b)&&(codigo[i+2]==c))
        count+=1;
    }
return (count);
}

int main (){

    int n,r,i;
    char a,b,c;

    printf("Digite o tamanho do vetor:  ");
    scanf ("%d", &n);
    printf("Digite uma letra:  ");
    scanf (" %c", &a);
    printf("Digite uma letra:  ");
    scanf (" %c", &b);
    printf("Digite uma letra:  ");
    scanf (" %c", &c);
    char codigo[n];

    for (i=0; i<n; i++)
    {
        printf("Digite o %d valor da sequencia de caracteres:  ", i+1);
        scanf (" %c", &codigo[i]);
    }

    printf("O padrao aparece %d vezes",padraoCodigo(codigo, n, a, b, c));
return 0;
}
