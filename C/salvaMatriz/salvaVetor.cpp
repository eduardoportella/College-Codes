#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int *criaVetor(int n){
    int *vet;
    vet = (int *) malloc(sizeof(int *));
    if (vet == NULL){
        printf("Erro ao alocar memoria\n");
        return NULL;
    }

    return vet;
}

void mostra(int *vet, int n){
    int i;
    printf("\n Vetor: \n");
    for ( i = 0; i < n; i++)
    {
        printf("%3d ", vet[i]);
    }
}

void inicializa(int *vet, int n){
    int i;
    srand(time(NULL));
    for ( i = 0; i < n; i++)
    {
        vet[i]=rand() % 20;
    }
}

int salva(int *vet, int n){
    FILE *fp;
    fp = fopen("vetor.dad", "wb");
    if (fp==NULL) return -1;
    fwrite(vet, n*sizeof(int), 1, fp);
    fclose(fp);
    return 0;
}

int *carrega(int n){
    FILE *fp;
    int *vet;
    vet = criaVetor(n);
    if (vet == NULL){
        return NULL;
    }
    fp = fopen("vetor.dad", "rb");
    if (fp==NULL) return NULL;
    fread(vet, n*sizeof(int), 1, fp);
    fclose(fp);
    return vet;
}

int main(){
    int *A, tamanhoVet, ret;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanhoVet);
    A = criaVetor(tamanhoVet);
    if (A==NULL){
        printf("Erro memoria \n");
        return -1;
    }
    inicializa(A, tamanhoVet);
    mostra(A, tamanhoVet);
    ret = salva(A, tamanhoVet);
    if (ret == -1){
        printf("Erro ao salvar a matriz \n");
        return -2;
    }
    A = carrega(tamanhoVet);
    printf("\n\nDados lidos do arquivo:\n");
    mostra(A, tamanhoVet);
    
    printf("\n");
    system("pause");
    return 0;
}