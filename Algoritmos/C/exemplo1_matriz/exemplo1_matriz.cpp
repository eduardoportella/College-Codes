#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4

float maior(float X[N][N], int NL, int NC){
    int i, j;
    float ma;
    ma = X[0][0];
    for ( i = 0; i < NL; i++)
    {
        for ( j = 0; j < NC; j++)
        {
            if(X[i][j]>ma) ma = X[i][j];
        }
        
    }
    
}

float normaliza(float X[N][N], int NL, int NC){
    int i, j;
    float ma;
    ma = maior(X, NL, NC);
    for ( i = 0; i < NL; i++)
    {
        for ( j = 0; j < NC; j++)
        {
            X[i][j] = X[i][j] / ma;
        }
    }
    return ma;
}

void mostra(float X[N][N], int NL, int NC){
    int i, j;
    for ( i = 0; i < NL; i++)
    {
        for ( j = 0; j < NC; j++)
        {
            printf("%5.1f ", X[i][j]);
        }
        printf("\n");
    }
}

int main(){
    float A[N][N], soma;
    int i, j;
    // LER A MATRIZ
    srand(time(NULL)); ///ALEATORIO
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
            //printf("A(%d, %d): ", i, j);
            //scanf("%f", &A[i][j]);
            A[i][j] = rand() % 10; //ALEATORIO
        }
    }
    soma = 0;
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
            soma = soma+A[i][j];
        }
    }
    
    // MOSTRA A MATRIZ
    printf("Matriz antes de normalizar: \n");
    mostra(A, N, N);

    //SOMA E MAIOR ELEMENTO
    printf("Soma = %.1f \n", soma);
    printf("Maior elemento = %.1f \n", maior(A, N, N));

    //NORMALIZA A MATRIZ
    normaliza(A, N, N);
    printf("Matriz depois de normalizar: \n");
    mostra(A, N, N);


    system("pause");
    return 0;
}