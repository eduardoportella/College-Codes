// Fazer um problema em C que leia um vetor com 100 elementos e o preencha da seguinte forma. Para as posições pares do vetor (considere também a posição zero neste caso) preencher com 2*i (sendo i a posição processada). Já para as posições ímpares preencher com 2*i+1.

#include <stdio.h>
#include <stdlib.h>
#define n 100

int main() {
    int i, vetor[n];
    for (i = 0; i < n; i++)
    {
        printf("\ndigite o valor %d: ", i);
        scanf("%d", &vetor[i]);
        if (i%2 == 0){
            vetor[i]= vetor[i]*2;   
        } else {
            vetor[i] = vetor[i]*2+1;
        }
    }
    printf("o resultado eh: \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}