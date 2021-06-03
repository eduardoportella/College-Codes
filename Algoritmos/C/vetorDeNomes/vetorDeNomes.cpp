#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10
#define M 30

void le_10nomes(char v[N][M]) {
     int i;
     printf("Entre com 10 nomes, um por linha:\n");
     for(i=0; i<N; i++)
       gets(v[i]);
}

void ordena(char v[N][M]) {
    int i, j;
    char aux[M];
    for(i=0; i<N-1; i++)
      for(j=i+1; j<N; j++) 
         if (strcmpi(v[i],v[j])>0) {
             strcpy(aux, v[i]);
             strcpy(v[i], v[j]);
             strcpy(v[j], aux);
         }
}

void mostra(char v[N][M]) {
    int i;
    printf("\n\nNomes no vetor: \n");
    for (i=0; i<N; i++)
       printf("%s  ", v[i]);     
     
}
int PB(char v[N][M], int I, int F, char nome[]){
    int meio;
    if (I>F) return -1;
    meio=(I+F)/2;
    if (strcmpi(nome,v[meio])==0) return meio;
    if (strcmpi(nome, v[meio])>0)
        return PB(v, meio+1, F, nome);
    else
        return PB(v, I, meio-1, nome);      
}
void busca(char v[N][M]) {
    char nome[M];
    int ret;
    printf("Informe um nome (encerra com fim): ");
    gets(nome);
    while (strcmpi(nome, "fim")!=0) {
         ret=PB(v, 0, N-1, nome);
         if (ret==-1) printf("Nome nao encontrado\n");
         else printf("%s encontrado na posicao %d\n", nome, ret);
         printf("Informe um nome (encerra com fim): ");
         gets(nome);
    }     
}

int main() {
    char vnome[N][M];
    le_10nomes(vnome);   
    mostra(vnome);
    ordena(vnome);
    mostra(vnome);
    busca(vnome);
    system("pause");
    return 0; 
}