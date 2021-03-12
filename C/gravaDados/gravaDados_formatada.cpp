#include <stdio.h>
#include <stdlib.h>

int grava_dados(){
    FILE *fp;
    int cod, cg=0;
    float nota;

    fp = fopen("dados.dad", "ab");
    if (fp == NULL){
        printf("Erro na abertura do arquivo\n");
        return -1;
    }
    
    printf("Cod: ");
    scanf("%d", &cod);
    while (cod>0){
        printf("Nota: ");
        scanf("%f", &nota);
        fprintf(fp, "%d, %.1f\n", cod, nota);
        cg++;
        printf("Cod: ");
        scanf("%d", &cod);
    }

    fclose(fp);
    return cg;
}

void mostra_dados(){
    FILE *fp;
    int cod;
    float nota;
    fp = fopen("dados.dat", "b"); //r de read
    if (fp == NULL){
        printf("Erro na abertura do arquivo \n");
        exit(-1);
    }

    fscanf(fp, "%d, %.1f\n", &cod, &nota);

    while(!feof(fp)){ //enquanto nao for final do arquivo
        printf("Dados lidos: %d, %.1f\n", cod, nota);
    }
    fclose(fp);
}

int main(){
    int r;
    r = grava_dados();
    if (r == -1){
        printf("Ocorreu erro na gravação dos dados\n");
    } else{
        printf("Lendo as %d entradas\n", r);
        mostra_dados();
    }
    system("pause");
    return 0;
}