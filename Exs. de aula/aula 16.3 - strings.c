#include <stdio.h>
int changeab (char n1[]){

    int i, count=0;

    for (i=0; i<=100; i++)
    {
        if (n1[i] == '\0')
            break;
        else if (n1[i] == 'a')
        {
            count++;
            n1[i] = 'b';
        }
    }
return (count);
}

int main (){

    char n1[101];
    int vog=0, count;

    printf("Digite o texto:");
    gets(n1);

    count = changeab(n1);
    puts(n1);
    printf("%d letras alteradas de a para b", count);


return (0);
}
