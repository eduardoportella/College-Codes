#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define M 8  // pares de cartas
#define N 4  // tabuleiro 4x4 que armazena 16 cartas

char Tab[N][N];
char cartas[M] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

void inicia_tab() {
	int x, cont, i, j;
	
	for(i=0; i<N; i++)
	  for(j=0; j<N; j++) Tab[i][j]= 'Z';
	
	srand(time(NULL));
    x=0;
    cont=0;
	while (x<M){  // para cada elemento em V
		i=rand() % 4;
		j=rand() % 4;
		if (Tab[i][j] == 'Z') {
		   Tab[i][j] = cartas[x];
		   cont++;
	    }
		if (cont > 1) {
			x++;
		    cont = 0;
		}
	}	
}

void mostra_tab() {
	int i, j;
	printf(" ----  Tabuleiro do Jogo  -----\n\n");
	for(i=0; i<N; i++) {
	  for(j=0; j<N; j++) 
	      printf ("%c  ", Tab[i][j]);
	  printf("\n");
    }
}

int main() {
	inicia_tab();
	mostra_tab();
    return 0;	
}

