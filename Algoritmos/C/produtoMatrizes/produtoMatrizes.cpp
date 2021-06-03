#include <stdio.h>
#include <stdlib.h>

#define n 3

void produto(int X[n][n], int Y[n][n], int Res[n][n]){
    int i, j;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            Res[i][j] = X[i][j] * Y[i][j];
        }
    }
}

void mostra(int z[n][n]){
    int i, j;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%5d ", z[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int i, j, a[n][n], b[n][n], c[n][n];
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("A(%d, %d): ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("B(%d, %d): ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    produto(a, b, c);
    printf("O produto entre as duas matrizes eh: \n");
    mostra(c);

    system("pause");
    return 0;
}