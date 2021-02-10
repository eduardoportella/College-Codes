#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define M 8  // pares de cartas
#define n 4  // tabuleiro 4x4 que armazena 16 cartas

char tab[n][n];
char cartas[M] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

void criaTab() {
	int i, j, cont, x;
	
	for(i=0; i<n; i++)
	  for(j=0; j<n; j++) tab[i][j]= 'Z';
	
	srand(time(NULL));
    x=0;
    cont=0;
	while (x<M){  // para cada elemento em V
		i=rand() % 4;
		j=rand() % 4;
		if (tab[i][j] == 'Z') {
		   tab[i][j] = cartas[x];
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
	for(i=0; i<n; i++) {
	  for(j=0; j<n; j++) 
	      printf ("%c  ", tab[i][j]);
	  printf("\n");
    }
}

int main() {
	criaTab();
	mostra_tab();
    return 0;	
}

