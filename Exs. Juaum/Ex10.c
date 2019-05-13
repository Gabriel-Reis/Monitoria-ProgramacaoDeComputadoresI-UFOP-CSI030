#include <stdio.h>

void coplaate(char destino[], char origem[], char parar){

    int i;

    for(i=0; i<25; i++)
    {
        if ((origem[i] == '\0') || (origem[i] == parar))
            break;
        if (origem[i]!= '\0' && origem[i]!= parar)
            destino[i] = origem[i];
    }
}
int main (){

    char origem[25], destino[25], parar;

    printf("Digite uma palavra:  ");
    gets(origem);
    printf("Digite uma letra:  ");
    scanf("%c", &parar);

    coplaate(destino, origem, parar);
    printf("%s", destino);
return 0;
}
