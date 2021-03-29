#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

struct jogador{
    int pontos;
    char nome;
};

void organizar(){
    FILE *fp;
    int pontoMaior=0, pontos, pontoAux, i=0;
    char nomeMaior[10], nome[10], nomeAux[10];
    fp = fopen("teste.txt", "r"); //r de read
    if (fp == NULL){
        printf("Erro na abertura do arquivo \n");
        exit(-1);
    }

    struct jogador rank;
    while (!feof(fp))
    {
        printf("%d", i);
        i++;
        sleep(1);
    }
    printf("teste22\n");
    fclose(fp);
}

int main(){
    fflush(stdin);
    int pontos;
    char repetir, nome[10];
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