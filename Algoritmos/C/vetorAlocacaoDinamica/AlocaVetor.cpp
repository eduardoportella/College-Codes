// Aloca��o din�mica de mem�ria
// Exemplo 1 - Alocando um vetor durante a execu��o do programa

#include <stdio.h>
#include <stdlib.h>

// Fun��o para aloca��o din�mica de um vetor
float *alocavet(int N) {
	float *v;
	v = (float *) malloc(N*sizeof(float));
	if (v==NULL) {
		printf("Erro ao alocar memoria\n");
		exit(-1);    // sai do programa
	}
	printf("Vetor alocado com sucesso\n");
	return v; 
}

// Procedimento para inicializar o vetor com zeros
void zeravet(float *v, int N) {
	int i;
	printf("Inicializando o vetor\n");
	for(i=0; i<N; i++) v[i]=0;
}

// Procedimento para mostrar o vetor
void mostra(float *v, int N){
	int i;
	printf("\n\n Valores no vetor: \n");
	for(i=0; i<N; i++) 
	   printf("%.1f ", v[i]); 
}

// Libera a mem�ria alocada (deleta o vetor)
void liberavet(float *v) {
	if (v!=NULL) free(v);
	printf("Memoria liberada \n");
}

// Fun��o principal
int main() {
	float *x;
	int tam;
	printf("Qual tamanho do vetor? ");
	scanf("%d", &tam);
	x= alocavet(tam);
	zeravet(x, tam);
	mostra(x, tam);
	liberavet(x);
	return 0;
}
