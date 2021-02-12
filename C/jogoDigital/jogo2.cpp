#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **alocaMat(int N, int M){
    char **Mat;
    int i;
    Mat = (char **) malloc(N*sizeof(char *));
    if (Mat == NULL){
        printf("Erro ao alocar memoria \n");
        exit(-1);
    }
    for ( i = 0; i < N; i++)
    {
        Mat[i] = (char *) malloc(M*sizeof(char));
        if (Mat[i] == NULL){
            printf("Erro ao alocar memoria\n");
            exit(-1);
        }
    }
    printf("Matriz alocada com sucesso \n");
    return Mat;
}

void zeraMat(char **x, int N, int M){
    int i, j;
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < M; j++)
        {
            x[i][j] = 'OI';
        }
    }
    printf("Matriz inicializada com sucesso \n");
}

void mostra(char **x, int N, int M){
    int i, j;
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < M; j++)
        {
            printf("%.1f ", x[i][j]);
        }
        printf("\n");
    }
}

void liberaMat(char **x, int N){
    int i;
    for ( i = 0; i < N; i++)
    {
        if (x[i] != NULL){
            free(x[i]);
        }
    }
    free(x);
    printf("Memoria liberada com sucesso \n");
}

int main(){
    int dif, n, m;
    char **tab;
    printf("Qual a dificuldade?\n 1) Facil\n 2) Dificil\n");
    scanf("%d", &dif);
    if (dif != 1 && dif != 2){
        printf("ERRO");
        exit(-2);
    } else if (dif == 1){
        n = 4;
        m = 8;
    } else {
        n = 6;
        m = 18;
    }
    tab = alocaMat(n, m);
    zeraMat(tab, n, n);
    mostra(tab, n, n);
    liberaMat(tab, n);

}