#include <stdio.h>

int ultima(char string[], char c){

    int i, back = -1;

    for (i=0; i<30; i++)
            if (string[i] != '\0' && string[i] == c)
                back = i;

return (back);
}
int main (){

    char str[20],c;

    printf("Digite uma palavra: ");
    gets(str);
    printf("Digite uma letra: ");
    scanf("%c", &c);

    printf("Valor de retorno: %d", ultima(str, c));
return 0;
}
