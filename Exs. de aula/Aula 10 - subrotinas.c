#include <stdio.h>

int soma (int x, int y){
/* tipo de retorno .. nome variavels .. (tipos de entrada e nome)*/
return (x+y);

}



int main (void){

int a,b,c;
scanf ("%d %d", &a, &b);
c = soma(a,b);
printf("%d", c);


return 0;
}
