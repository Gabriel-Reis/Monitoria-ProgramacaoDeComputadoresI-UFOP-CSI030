#include <stdio.h>

int main () {

float altura,peso,imc;

printf("Informe sua altura: ");
scanf ("%f", &altura);
printf("Informe seu peso: ");
scanf ("%f", &peso);

imc=peso/(altura*altura);

    if ((20<imc)&&(imc<25))
    {printf ("IMC = %f\n",imc);
    printf ("IMC = Ideal");}
    else if ((25<imc)&&(imc<30))
    {printf ("IMC = %f\n",imc);
    printf ("IMC = sobre peso");}
    else if ((30<imc)&&(imc<40))
    {printf ("IMC = %f\n",imc);
    printf ("IMC = Obesidade");}
    else if (imc>40)
    {printf ("IMC = %f\n",imc);
    printf ("IMC = Ideal");}
    else
    printf ("erro");




    return 0;
}
