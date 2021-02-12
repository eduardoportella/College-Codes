#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// int M = 18;  // pares de cartas
// int n = 6;  // tabuleiro 4x4 que armazena 16 cartas
char cartas[18] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R'};

float **alocaMat(int N){
    float **Mat;
    int i;
    Mat = (float **) malloc(N*sizeof(float *));
    if (Mat == NULL){
        printf("Erro ao alocar memoria \n");
        exit(-1);
    }
    for ( i = 0; i < N; i++)
    {
        Mat[i] = (float *) malloc(N*sizeof(float));
        if (Mat[i] == NULL){
            printf("Erro ao alocar memoria\n");
            exit(-2);
        }
    }
    printf("Matriz alocada com sucesso \n");
    return Mat;
}

void dificuldade(float **x, int *n, int *M){
	int dif, i, j, cont;
	printf("Escolha a difuldade:\n 1) Normal 2) Dificil\n");
	scanf("%d", &dif);
	if (dif != 1 && dif != 2){
		printf("ERRO");
		exit(-1);
	} else if (dif == 1){
		*n = 4;
		*M = 8;
	} else {
		*n = 6;
		*M = 18;
	}
}

void criaTab(float **mat) {
	int i, j, cont, x;
	
	for(i=0; i<n; i++)
	  for(j=0; j<n; j++) mat[i][j]= 'Z';
	
	srand(time(NULL));
    x=0;
    cont=0;
	while (x<M){  // para cada elemento em V
		i=rand() % n;
		j=rand() % n;
		if (mat[i][j] == 'Z') {
		   mat[i][j] = cartas[x];
		   cont++;
	    }
		if (cont > 1) {
			x++;
		    cont = 0;
		}
	}	
}

void mostra_tab(float **x) {
	int i, j;
	printf(" ----  Tabuleiro do Jogo  -----\n\n");
	for(i=0; i<n; i++) {
	  for(j=0; j<n; j++) 
	      printf ("%c", x[i][j]);
	  printf("\n");
    }
}

int main() {
	float **MA;
	int *M, *n;
	// int *M = 18;  // pares de cartas
	// int *n = 6;  // tabuleiro 4x4 que armazena 16 cartas
	dificuldade(MA, n, n);
	MA = alocaMat(*n);
	criaTab(MA);
	mostra_tab(MA);
	system("pause");
    return 0;
}

