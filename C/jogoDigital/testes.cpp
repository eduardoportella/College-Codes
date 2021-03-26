#include <stdlib.h>
#include <stdio.h>
#include <string.h>
typedef struct rank{
    char nome[10];
    int pontos;
};

void organizar(){
    FILE *fp;
    struct rank jogador;
    int pontoMaior=0;
    char nomeMaior[10];
    fp = fopen("teste.txt", "r"); //r de read
    if (fp == NULL){
        printf("Erro na abertura do arquivo \n");
        exit(-1);
    }
    while(!feof(fp)){ //enquanto nao for final do arquivo
        fscanf(fp, "%s   %d\n", jogador.nome, jogador.pontos);
        if (jogador.pontos > pontoMaior){
            pontoMaior = jogador.pontos;
            strcpy(nomeMaior, jogador.nome);
        }
    }
    printf("%c %d", nomeMaior, pontoMaior);
    fclose(fp);
}

int main(){
    fflush(stdin);
    char repetir;
    struct rank jogador;
    FILE *file;
    organizar();
    file = fopen("teste.txt", "a");
    printf("NOME: ");
    fgets(jogador.nome, 10, stdin);
    printf("%s \n", jogador.nome);
    printf("PONTOS: ");
    scanf("%d", &jogador.pontos);
    fprintf(file, "%s   %d\n", jogador.nome, jogador.pontos);
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