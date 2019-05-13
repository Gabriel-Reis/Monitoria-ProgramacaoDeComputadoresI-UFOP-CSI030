#include <stdio.h>

int contc(char str[], char c){

    int i, count=0;

    for (i=0; i<30; i++)
        if ((str[i]!='\0')&&(str[i]==c))
            count++;

return (count);
}

int main (){
    char str[30], letra;

    letra = 'c';

    gets(str);

    printf("A letra %c aparece %d vezes.", letra, contc(str, letra));
return 0;
}
