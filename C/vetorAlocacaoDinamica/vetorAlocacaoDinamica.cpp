#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *alocacaoDoVetor(int N){
    int *v;
    v = (int *) malloc(N*sizeof(int)); 
    if (v == NULL){
        printf("Erro de alocacao\n");
        exit(-1);
    }
    printf("Sucesso em alocar o vetor");
    return v;
}

void iniciaVet(int *x, int N){
    int i;
    srand(time(NULL));
    for ( i = 0; i < N; i++)
    {
        x[i] = rand() % 2;
    }
}

void mostra(int *x, int N){
    int i;
    printf("\n\n Valores do vetor: \n");
    for ( i = 0; i < N; i++)
    {
        printf("%d ", x[i]);
    }
}

void liberavet(int *x){
    if (x != NULL){
        free(x); //Sempre verificar antes de liberar
        printf("\nMemoria liberada \n");
    }
}

int first_fit(int *x, int tam, int valor){
    int i, j;
    bool espacoVago = false;
    for (i = 0; i < tam; i++) //analisar vetor
    {
        if (x[i] == 0) //verificar se o espaco ta vago
        {
            for (j = i+valor; j > i; j--) //verificar se os espacos a seguir estao vagos
            {
                if (x[j] == 0 && x[j]<tam){
                    espacoVago = true;
                } else {
                    espacoVago = false;
                }
            }
            if (espacoVago == true)
            {
                return i+1;
                break;
            }
        }
    }
    return -1;
}

void best_fit(int *x){

}

int main(){
    int *vet, tam, T;
    bool repetir = true;
    char resp;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    printf("Digite quantas casas deseja ocupar: ");
    scanf("%d", &T);
    if (tam < T)
    {
        printf("ERRO. Nao eh possivel alocar %d pois o vetor eh de tamanho %d", T, tam);
        exit(-2);
    }
    
    vet = alocacaoDoVetor(tam);
    iniciaVet(vet, tam);
    mostra(vet, tam);
    printf("\nA casa sera ocupada em: %d", first_fit(vet, tam, T));
    liberavet(vet);
    printf("Deseja repetir? [S/N] \n");
    scanf("%s", &resp);
    if (resp == 's' || resp == 'S'){
        system("cls");
        main();
    }
    system("pause");
    return 0;
}