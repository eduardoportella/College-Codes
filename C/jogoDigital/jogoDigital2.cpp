#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 4
char matrizPrincipal[n][n];

int testando(int z){ //precisa de parametro por algum motivo
    int i, j, k, l, vetor[19];

    char matrizChar[n][n];
    char vetorcaractere[8];
    vetorcaractere[8] = {'1', '2', '3', '4', '5', '6', '7', '8'};
    
    for ( i = 0; i < n; i++) //FAZER UM VETOR TENTAR DISTRIBUIR
    {
        for ( j = 0; j < n; j++)
        {
            matrizChar[i][j] = 'ABERTO';
        }
    }
    for ( i = 0; i < 19; i+2)
    {
        vetor[i] = i;
        vetor[i+1] = i;
        printf("%d, %d \n", vetor[i], vetor[i+1]);
    }
    
    for ( k = 1; i < 2; i++)
    {
        for ( l = 0; j < 10; j++)
        {
            i = rand()% n;
            j = rand()% n;
            if (matrizChar[i][j] == 'ABERTO')
            {
                matrizChar[i][j] = vetorcaractere[l];
            } else {
                testando(1);
            }
        }
    }

    //MOSTRAR A MATRIZ
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%5d ", matrizChar[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int main() {
    srand(time(NULL));
    testando(1);
    

    system("pause");
    return 0;
}


