#include <stdio.h>

int contabranco(char string[]){

    int i, count =0;

    for (i=0; i<20; i++)
    {
        if (string[i] == ' ')
            count++;
    }

return (count);
}
int main (){

    char string[20];

    printf("Digite uma frase:  ");
    gets(string);

    printf("A frase possui %d espacos em branco.", contabranco(string));

return 0;
}
