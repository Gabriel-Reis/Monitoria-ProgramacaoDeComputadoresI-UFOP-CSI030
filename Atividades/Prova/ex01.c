/**
        Gabiel Augusto Requena dos Reis - 16.2.8105
        Sistemas de informacao - CSI030
*/


#include <stdio.h>
#include <math.h>

void calcularVetores (float A[], float B[], float C[], int n){

    int i;

    for (i=0; i<n; i++)
    {
        printf("Digite o %d valor do vetor", i+1);
        scanf ("%f", &A[i]);
    }

    for (i=0; i<n; i++)
    {
        B[i] = (pow(A[i],2)+(2*n+(sqrt(A[i]))));
        C[i] = pow(A[i],5) + 4*(B[i]);
    }

    printf("\nVetor A: \n");      ///VETOR A
    for (i=0; i<n; i++)
        printf("%.2f \t", A[i]);
    printf("\nVetor B: \n");      ///VETOR B
    for (i=0; i<n; i++)
        printf("%.2f \t", B[i]);
    printf("\nVetor C: \n");      ///VETOR C
    for (i=0; i<n; i++)
        printf("%.2f \t", C[i]);
}


int main (void){

    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    float A[n], B[n], C[n];
    calcularVetores(A, B, C, n);

return 0;
}
