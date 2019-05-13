#include <stdio.h>

int main () {

int verifica, num, temp;

    verifica = 0;

    printf("Verificar se o numero digitado eh  palindromo.\n\n\n");
    printf("Digite o numero para verificacao:   ");
    scanf("%d", &num);

    temp = num;
    while ( temp != 0)
        {
            verifica = verifica * 10 + temp % 10;
            temp = temp / 10;
        }
    if(verifica == num)
            printf("O numero e palindromo ");
    else
        printf("O numero nao e palindromo");

    return 0;
}
