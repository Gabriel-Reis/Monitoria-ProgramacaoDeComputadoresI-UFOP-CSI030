#include <stdio.h>

void inserirletra(char str[], char l, int x){

    int tam,i;

    for(i=0; i<301; i++)
        if (str[i] == '\0')
            tam = i;

    for (i=tam+1; i>x; i--)
        str[i] = str[i-1];

    str[x] = l;
}

int main (){

    char str[301], l;
    int x;

    printf("Digite uma frase:    ");
    gets(str);
    printf("Digite uma letra para inserir:  ");
    scanf("%c", &l);
    printf("Digite uma posicao:  ");
    scanf("%d", &x);

    inserirletra(str, l, x);
    puts(str);

return 0;
}
