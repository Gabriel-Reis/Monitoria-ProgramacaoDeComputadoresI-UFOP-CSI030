#include <stdio.h>

int main (){

char n1[30], n2[30];

    printf("Digite se nome :");
    gets(n1); //recebe string digitada
    ///scanf ("%[^\n]s", n1);

    strcpy (n2,n1); //copia string n1 PARA n2 /// (destino, origem)

    puts(n1); // Exibe string n1 /// Pula linha automaticamente
    ///printf("%s",n1);
    puts(n2); // Exibe string n2



return (0);
}
