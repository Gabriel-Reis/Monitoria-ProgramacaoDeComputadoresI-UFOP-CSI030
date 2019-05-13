
#include <stdio.h>

int main (void){

float n1, n2, n3, media;

printf ("Digite a nota da primeira prova: \n");
scanf ("%f", &n1);
printf ("Digite a nota da segunda prova: \n");
scanf ("%f", &n2);
printf ("Digite a nota da terceira prova: \n");
scanf ("%f", &n3);

media = (n1+n2+n3)/3;

    if (media >= 6.0)
        printf ("O Aluno passou.\n");
    if ((media>5.0)&&(media<6.0))
        printf ("O Aluno tem direito a fazer prova extra.\n");
    if ((media>4.0)&&(media<=5.0))
        printf ("O Aluno tem direito a fazer prova final.\n");
    if (media < 4.0)
        printf ("O Aluno foi reprovado.\n");

return 0;
}
