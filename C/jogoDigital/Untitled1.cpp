#include <stdlib.h>
#include <stdio.h>
//Aloca��o din�mica de mem�ria
//Exemplo 1 - Alocando um vetor durante a execu��o do programa
//Este programa utiliza as fun��es malloc() e free()

//Fun��o para aloca��o do vetor
float *alocavet(int N){
    float *v;
    v = (float *) malloc(N*sizeof(float));
    if (v == NULL){ //Testando pra ver se deu certo
        printf("Erro ao alocar memoria\n");
        exit(-1); //Sai do programa
    }
    printf("Vetor alocado com sucesso");
    return v;
}

//Procedimento para inicializar o vetor com zeros
void zeravet(float*v, int N){
    int i;
    for ( i = 0; i < N; i++)
    {
        v[i] = 0;
    }
}

//procedimento para mostrar o vetor
void mostra(float *v, int N){
    int i;
    printf("\n\n Valores do vetor: \n");
    for ( i = 0; i < N; i++)
    {
        printf("%.1f ", v[i]);
    }
}

//libera a mem�ria alocada (deleta o vetor)
void liberavet(float *v){
    if (v != NULL){
        free(v); //Sempre verificar antes de liberar
        printf("Memoria liberada \n");
    }
}

int main(){
    float *x;
    int tam;
    printf("Qual o tamanho do vetor? ");
    scanf("%d", tam);
    x = alocavet(tam);
    zeravet(x, tam);
    mostra(x, tam);
    liberavet(x);

    system("pause");
    return 0;
}
