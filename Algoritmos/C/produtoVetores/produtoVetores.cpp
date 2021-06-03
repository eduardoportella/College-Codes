#include <stdlib.h>
#include <stdio.h>
#define n 5

void produto(int x[], int y[], int vProduto[], int Tam);

int main(){
    int i, vetorA[n], vetorB[n], vetorProduto[n];
    for (i = 0; i < n; i++)
    {
        printf("digite o valor %d do vetor A: \n", i+1);
        scanf("%d", &vetorA[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("digite o valor %d do vetor B: \n", i+1);
        scanf("%d", &vetorB[i]);
    }
    printf("\n");
    produto(vetorA, vetorB, vetorProduto, n);
    printf("[");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", vetorProduto[i]);
    }
    printf("]");
    printf("\n");
    system("pause");
    return 0;
}

void produto(int x[], int y[], int vProduto[], int Tam){
    int i;
    for ( i = 0; i < Tam; i++)
    {
        vProduto[i] = x[i] * y[i]; 
    }
}