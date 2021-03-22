#include <stdlib.h>
#include <stdio.h>

int main(){
    int pontos;
    char nome;
    FILE *file;
    file = fopen("teste.txt", "a");
    printf("NOME: ");
    gets(&nome);
    printf("PONTOS: ");
    scanf("%d", &pontos);
    fprintf(file, "%c   %d\n", nome, pontos);
    fclose(file);

    system("pause");
    return 0;
}