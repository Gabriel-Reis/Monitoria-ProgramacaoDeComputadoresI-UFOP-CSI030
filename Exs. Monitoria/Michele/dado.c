#include <stdio.h>

int dado(){
    return (rand()%6+1);
}

int main (void){
    int i, n1=0, n2=0, n3=0, n4=0, n5=0, n6=0, aux;

    for(i=0;i<1000000;i++){
        aux = dado();
        if( aux == 1)
            n1++;
        else if (aux == 2)
            n2++;
        else if (aux == 3)
            n3++;
        else if (aux == 4)
            n4++;
        else if (aux == 5)
            n5++;
        else if (aux == 6)
            n6++;
    }

    printf("Porcentagem de 1: %.2f \n ",(float) n1*100/1000000);
    printf("Porcentagem de 2: %.2f \n ",(float) n2*100/1000000);
    printf("Porcentagem de 3: %.2f \n ",(float) n3*100/1000000);
    printf("Porcentagem de 4: %.2f \n ",(float) n4*100/1000000);
    printf("Porcentagem de 5: %.2f \n ",(float) n5*100/1000000);
    printf("Porcentagem de 6: %.2f \n ",(float) n6*100/1000000);

    return 0;
}
