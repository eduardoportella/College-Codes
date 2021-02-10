//Alocação dinâmica de memória
//Exemplo w - Alocando um vetor durante a execução do programa
//Este programa utiliza as funções malloc() e free()
#include <stdlib.h>
#include <stdio.h>

//Aloca dinamicamente uma matriz de dimensões NxM;
float **alocaMat(int N, int M){
    float **Mat;
    int i;
    Mat = (float **) malloc(N*sizeof(float *));
    if (Mat == NULL){
        printf("Erro ao alocar memoria \n");
        exit(-1);
    }
    for ( i = 0; i < N; i++)
    {
        Mat[i] = (float *) malloc(M*sizeof(float));
        if (Mat[i] == NULL){
            printf("Erro ao alocar memoria\n");
            exit(-1);
        }
    }
    printf("Matriz alocada com sucesso \n");
    return Mat;
}

//Inicializa a matriz com zeros;
void zeraMat(float **x, int N, int M){
    int i, j;
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < M; j++)
        {
            x[i][j] = 0;
        }
    }
    printf("Matriz inicializada com sucesso \n");
}

//Mostra a matriz
void mostra(float **x, int N, int M){
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

//Função para liberação da memória alocada
void liberaMat(float **x, int N){
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


//Função principal
int main(){
    float **MA;
    int L, C;
    printf("Informe tamanho da matriz NxM: ");
    scanf("%dx%d", &L, &C);
    MA = alocaMat(L, C);
    zeraMat(MA, L, C);
    mostra(MA, L, C);
    liberaMat(MA, L);

    system("pause");
    return 0;
}