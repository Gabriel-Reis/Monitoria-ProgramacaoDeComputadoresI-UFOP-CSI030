#include <stdio.h>

int main(){

int base, i, j;

printf("O programa deve imprimir um triangulo invertido, informe o tamanho da base:   ");
scanf("%d",&base);

for(j = 0; j< base; j++){ /* Controla quantidade de linhas */
for(i = j; i < base; i++){ /* Controla quantidade de espaços*/
printf(" ");
}

for(i = j; i >= 0; i--){ /* Imprine a quantidade de "*" */
printf("*");
}
printf("\n");

}
return 0;
}
