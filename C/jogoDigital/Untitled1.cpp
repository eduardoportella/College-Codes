#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
int pontos=0, sequencia=0;

void inicia_tab(char Tab[N][N], char TabCensurado[N][N], char cartas[M]) {
	int x, cont, i, j;
	
	for(i=0; i<N; i++)
	  for(j=0; j<N; j++){
		Tab[i][j]= 'Z';
		TabCensurado[i][j] = 'X';
	  }
	
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

void limpar(){
    system("cls");
}

void mostra_tab(char Tab[N][N]) {
	int i, j;
	printf(" ----  Tabuleiro do Jogo  -----\n\n");
	for(i=0; i<N; i++) {
	  for(j=0; j<N; j++) 
	      printf ("%c  ", Tab[i][j]);
	  printf("\n");
    }
}

void mostra_tab2(char Tab[N][N]) {
	int i, j;
	for(i=0; i<N; i++) {
	  for(j=0; j<N; j++) 
	      printf ("%c  ", Tab[i][j]);
	  printf("\n");
    }
	printf("\n");
}

void mostra_tabCensurado(char TabCensurado[N][N]){
	int i, j;
	printf("PONTOS: %d \n\n", pontos);
	for(i=0; i<N; i++) {
	  for(j=0; j<N; j++) 
	      printf ("%c  ", TabCensurado[i][j]);
	  printf("\n");
    }
	printf("\n");
}

void temporizador(int segundos){
    int i;
    limpar();
    for ( i = segundos; i > 0; i--)
    {
		mostra_tab2(Tab[N][N]);
		printf("%d Segundos", i);
        sleep(1);
		system("cls");
    }
}

void tirandoCensura(char Tab[N][N], char TabCensurado[N][N]){
	system("cls");
	mostra_tabCensurado(Tab[N][N], TabCensurado[N][N]);
	int i, j, linhaAux1, linhaAux2, colunaAux1, colunaAux2;
	char carta1, carta2;
	printf("Digite LinhaxColuna: ");
	scanf("%dx%d", &linhaAux1, &colunaAux1);
	if (linhaAux1 < 1 || linhaAux1 > N || colunaAux1 < 1 || colunaAux1 > N){
		printf("ERRO");
		sleep(1);
		tirandoCensura(Tab[N][N], TabCensurado[N][N]);
	}
	linhaAux1 = linhaAux1-1;
	colunaAux1 = colunaAux1-1;
	if (TabCensurado[linhaAux1][colunaAux1] == 'X'){
		TabCensurado[linhaAux1][colunaAux1] = Tab[linhaAux1][colunaAux1];
		carta1 = Tab[linhaAux1][colunaAux1];
	} else {
		printf("ERRO, %dx%d ja foi descoberto \n", linhaAux1+1, colunaAux1+1);
		sleep(1);
		tirandoCensura(Tab[N][N], TabCensurado[N][N]);
	}
	system("cls");
	mostra_tabCensurado(TabCensurado[N][N]);
	printf("Digite LinhaxColuna: ");
	scanf("%dx%d", &linhaAux2, &colunaAux2);
	if (linhaAux2 < 1 || linhaAux2 > N || colunaAux2 < 1 || colunaAux2 > N){
		printf("ERRO");
		sleep(1);
		tirandoCensura(Tab[N][N], TabCensurado[N][N]);
	}
	linhaAux2 = linhaAux2-1;
	colunaAux2 = colunaAux2-1;
	if (TabCensurado[linhaAux2][colunaAux2] == 'X'){
		TabCensurado[linhaAux2][colunaAux2] = Tab[linhaAux2][colunaAux2];
		carta2 = Tab[linhaAux2][colunaAux2];
	} else {
		printf("ERRO, %dx%d ja foi descoberto \n", linhaAux2+1, colunaAux2+1);
		sleep(1);
		tirandoCensura(Tab[N][N],TabCensurado[N][N]);
	}
	
	system("cls");
	if (carta1 == carta2){
		mostra_tabCensurado(TabCensurado[N][N]);
		printf("Acertou!");
		sleep(2);
		TabCensurado[linhaAux1][colunaAux1] = carta1;
		TabCensurado[linhaAux2][colunaAux2] = carta2;
		if (sequencia >= 3){
			pontos = pontos+15;
		} else {
			pontos = pontos+10;
		}
		sequencia++;
	} else {
		mostra_tabCensurado(TabCensurado[N][N]);
		printf("Errou!");
		sleep(2);
		TabCensurado[linhaAux1][colunaAux1] = 'X';
		TabCensurado[linhaAux2][colunaAux2] = 'X';
		sequencia = 0;
	}
	mostra_tabCensurado(TabCensurado[N][N]);
	for (i = 0; i < N; i++)
	{
		for ( j = 0; j < N; j++)
		{
			if (TabCensurado[i][j] == 'X')
			tirandoCensura(Tab[N][N], TabCensurado[N][N]);
		}
	}
}

int main() {
	int jogarNovamente, dificuldade, M, N;
	printf("Escolha a dificuldade:\n(1)Facil (2)Dificil");
	scanf("%d", &dificuldade);
	if (dificuldade == 1){
		N = 4;
		M = 8;
		char Tab[N][N], TabCensurado[N][N], cartas[M] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
	} else if (dificuldade == 2){
		N = 6;
		M = 18;
		char Tab[N][N], TabCensurado[N][N], cartas[M]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R'};
	} else {
		printf("ERRO");
		sleep(1);
		main();
	}
	inicia_tab(Tab[N][N], TabCensurado[N][N], cartas[M]);
	mostra_tab(Tab[N][N]);
    temporizador(5);
	tirandoCensura(Tab[N][N], TabCensurado[N][N]);
	printf("Parabens, voce fez %d", pontos);
	sleep(1);
	printf("Digite 1 para jogar novamente ou digite qualquer outra coisa para sair");
	scanf("%d", &jogarNovamente);
	if (jogarNovamente == 1){
		main();
	} else {
		system("pause");
		return 0;
	}	
}

