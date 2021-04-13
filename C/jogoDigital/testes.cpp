#include <stdlib.h>
#include <stdio.h>

typedef struct{
    int N, M;
    int mat[3][4];
    int score;
} treg;

int main(){
    FILE *fp;
    int i, j;
    char nome[30];
    // printf("Digite seu nome: ");
    // scanf("%s", &nome);
    // printf("%s", nome);
    treg tab, tab_loaded;
    tab.N= 3;
    tab.M= 4;
    for ( i = 0; i < tab.N; i++)
    {
        for ( j = 0; j < tab.M; j++)
        {
            tab.mat[i][j] = 1;
        }
    }
    tab.score = 5;

    //salvar o registros
    printf("Informe nome arquivo: ");
    scanf("%s", &nome);
    fp = fopen(nome, "wb");
    if (fp==NULL){
        printf("Erro ao criar arquivo");
        exit(-1);
    }
    fwrite(&tab, sizeof(tab), 1, fp);
    fclose(fp);

    //carregar 
    printf("Informe o nome do artigo a ser carregado");
    scanf("%s", &nome);
    fp = fopen(nome, "rb");
    if (fp==NULL){
        printf("Erro ao abrir arquivo");
        exit(-2);
    }
    fread(&tab_loaded, sizeof(tab_loaded), 1, fp);
    fclose(fp);

    //Mostando dados carregados
    printf("N: %d\n", tab_loaded.N);
    printf("M: %d\n", tab_loaded.M);
    printf("Score: %d\n", tab_loaded.score);
    for ( i = 0; i < tab_loaded.N; i++)
    {
        for ( j = 0; j < tab_loaded.M; j++ )
        {
            printf("%d ", tab_loaded.mat[i][j]);
        } printf("\n");
    }
}