#include <stdio.h>
void indpar(){

    int i,n1[11];

    for (i=0; i<=10; i++)
        scanf("%d", &n1[i]);

    for (i=0; i<=10; i+=2)
    {
        printf("vetor %d = %d", i, n1[i]);
    }
}

int main (){

    indpar ();

return (0);
}
