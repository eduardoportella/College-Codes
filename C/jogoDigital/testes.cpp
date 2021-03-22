#include <stdlib.h>
#include <stdio.h>

void organizar(){
    FILE *fp;
    int ponto, pontoMaior;
    char nome[50], nomeMaior[50];
    fp = fopen("teste.txt", "r"); //r de read
    if (fp == NULL){
        printf("Erro na abertura do arquivo \n");
        exit(-1);
    }

    fscanf(fp, "%s   %d\n", &nome, &ponto);

    while(!feof(fp)){ //enquanto nao for final do arquivo
        organizar();
        return;
    }
    printf("%c %d", nomeMaior, pontoMaior);
    fclose(fp);
}

int main(){
    fflush(stdin);
    int pontos;
    char nome[50], repetir;
    FILE *file;
    organizar();
    file = fopen("teste.txt", "a");
    printf("NOME: ");
    gets(nome);
    printf("%s \n", nome);
    printf("PONTOS: ");
    scanf("%d", &pontos);
    fprintf(file, "%s   %d\n", nome, pontos);
    fclose(file);
    printf("Continuar? [S/N]");
    fflush(stdin);
    scanf("%c", &repetir);
    if (repetir == 'S' || repetir == 's')
        main();
    else
        system("pause");
        return 0;
}