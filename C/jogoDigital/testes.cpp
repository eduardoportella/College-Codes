#include <stdlib.h>
#include <stdio.h>

int main(){
    int pontos;
    char nome[10];
    FILE *file;
    file = fopen("teste.txt", "a");
    printf("NOME: ");
    gets(nome);
    printf("%s \n", nome);
    printf("PONTOS: ");
    scanf("%d", &pontos);
    fprintf(file, "%s   %d\n", nome, pontos);
    fclose(file);

    system("pause");
    return 0;
}