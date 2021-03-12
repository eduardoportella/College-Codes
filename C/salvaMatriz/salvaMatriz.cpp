#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int **CriaMatriz(int N, int M){
    int **mat, i;
    mat=(int **) malloc(N*sizeof(int*));//o endereco q voltar de malloc vai ser do tipo **
    if (mat==NULL){
        printf("Erro ao alocar memoria\n");
        return NULL;
    }

    for ( i = 0; i < N; i++)
    {
        mat[i]=(int *) malloc(M*sizeof(int));
        if (mat[i]==NULL){
            printf("Erro ao alocar memoria\n");
            return NULL;
        }
    }
    
    return mat;
}

void mostra(int**X, int N, int M){
    int i,j;
    printf("\nMatriz: \n");
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < M; j++)
        {
            printf("%3d ", X[i][j]);
        }
        printf("\n");
    }
}

void inicializa(int **X, int N, int M){
    int i, j;
    srand(time(NULL));
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < M; j++)
        {
            X[i][j]=rand() % 100;
        }
    }
}

int salva(int **X, int N, int M){
    FILE *fp;
    int i;
    fp = fopen("matriz.dad", "wb");
    if (fp==NULL) return -1;
    //Exemplo salvando matriz toda
    // fwrite(X, N*M*sizeof(int), 1, fp);

    // Exemplo salvando linha a linha
    for ( i = 0; i < N; i++)
    {
        fwrite(X[i], M*sizeof(int), 1, fp);
    }
    
    fclose(fp);
    return 0;
}

int **carrega(int N, int M){
    FILE *fp;
    int **X, i;
    X = CriaMatriz(N, M);
    if (X==NULL){
        return NULL;
    }
    fp = fopen("matriz.dad", "rb");
    if (fp == NULL) return NULL;

    // Exemplo lendo a matriz toda de uma vez
    // fread(X, N*M*sizeof(int), 1, fp);

     // Exemplo lendo linha a linha
    for ( i = 0; i < N; i++)
    {
        fread(X[i], M*sizeof(int), 1, fp);
    }
    fclose(fp);
    return X;
}

int main(){
    int **A, QL, QC, ret;
    printf("Informe tamanho matriz NxM: ");
    scanf("%dx%d", &QL, &QC);
    A = CriaMatriz(QL, QC);
    if (A==NULL){
        printf("Erro memoria \n");
        return -1;
    }
    inicializa(A, QL, QC);
    mostra(A, QL, QC);
    ret = salva(A, QL, QC);
    if (ret == -1){
        printf("Erro ao salvar a matriz \n");
        return -2;
    }
    A = carrega(QL, QC);
    printf("\n\nDados lidos do arquivo:\n");
    mostra(A, QL, QC);

    
    system("pause");
    return 0;
}