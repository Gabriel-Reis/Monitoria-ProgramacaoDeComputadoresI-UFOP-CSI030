#include <stdio.h>

int main (){

    char n1[30];
    int vog=0, i;

    printf("Digite se nome :");
    gets(n1);

    for (i=0; i<=30; i++)
    {
        if (n1[i] == '\0')
            break;
        else if (n1[i]=='a'||n1[i]=='e'||n1[i]=='i'||n1[i]=='o'||n1[i]=='u'||
                 n1[i]=='A'||n1[i]=='E'||n1[i]=='I'||n1[i]=='O'||n1[i]=='U')
            vog ++;
    }

    printf ("O nome tem %d vogais", vog);
return (0);
}
