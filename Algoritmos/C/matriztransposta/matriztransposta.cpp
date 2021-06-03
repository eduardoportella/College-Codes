#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define n 4

void transposta(int A[n][n], int B[n][n]){
    int i, j;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            B[i][j] = A[j][i];
        }
    }
}  

void mostra(int X[n][n]){
    int i, j;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%5d ", X[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int i, j, X[n][n], XT[n][n]; 
    //srand(time(NULL));
    for ( i = 0; i <n ; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("X(%d, %d): ", i, j);
            scanf("%d", &X[i][j]);
            //X[i][j] = rand() % 10;
        }   
    }
    transposta(X, XT);
    printf("Matriz X \n");
    mostra(X);
    printf("Matriz transposta XT: \n");
    mostra(XT);

    system("pause");
    return 0;
}