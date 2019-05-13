#include <stdio.h>
#include <ctype.h>

void stringup(char destino[], char origem[]){

    int i;

    for (i=0; i<20; i++)
    {
        destino[i] = origem[i];
        destino[i] = toupper(destino[i]);
    }
}

int main (){

    char stro[20], strd[20];

    printf("Digite uma palavra: ");
    gets(stro);

    stringup(strd, stro);
    printf("\nString original: %s\n", stro);
    printf("String modificada: %s", strd);
return 0;
}
