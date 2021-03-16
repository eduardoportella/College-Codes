#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#define Nf 4
#define Mf 8
#define Nd 6
#define Md 18
int pontos=0, sequencia=0, dificuldade;
char cartasF[Mf] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
char cartasD[Md] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R'};
char TabF[Nf][Nf];
char TabD[Nd][Nd];
char TabCensuradoF[Nf][Nf];
char TabCensuradoD[Nd][Nd];


void inicia_tab() {
	int x, cont, i, j;
	srand(time(NULL));
	if (dificuldade == 1){
		for(i=0; i<Nf; i++)
	  	for(j=0; j<Nf; j++){
			TabF[i][j]= 'Z';
			TabCensuradoF[i][j] = 'X';
	  	}
	
		
    	x=0;
    	cont=0;
		while (x<Mf){  // para cada elemento em V
			i=rand() % Nf;
			j=rand() % Nf;
			if (TabF[i][j] == 'Z') {
		   	TabF[i][j] = cartasF[x];
		   	cont++;
	    	}
			if (cont > 1) {
				x++;
		    	cont = 0;
			}
		}
// #######################################
	} if (dificuldade ==2){
		for(i=0; i<Nd; i++)
	  	for(j=0; j<Nd; j++){
			TabD[i][j]= 'Z';
			TabCensuradoD[i][j] = 'X';
	  	}
    	x=0;
    	cont=0;

		while (x<Md){  // para cada elemento em V
			i=rand() % Nd;
			j=rand() % Nd;
			if (TabD[i][j] == 'Z') {
		   	TabD[i][j] = cartasD[x];
		   	cont++;
	    	}
			if (cont > 1) {
				x++;
		    	cont = 0;
			}
		}
	}	
}

void limpar(){
    system("cls");
}

void mostra_tab() {
	int i, j;
	printf(" ----  Tabuleiro do Jogo  -----\n\n");
	if (dificuldade == 1){
		for(i=0; i<Nf; i++) {
	  	for(j=0; j<Nf; j++) 
	      	printf("%c  ", TabF[i][j]);
	  	printf("\n");
    	}
		// #######################################
	}
	if (dificuldade ==2){
		for(i=0; i<Nd; i++) {
	  	for(j=0; j<Nd; j++) 
	      	printf("%c  ", TabD[i][j]);
	  	printf("\n");
		}
	}
}

void mostra_tab2() {
	int i, j;
	if (dificuldade == 1){
		for(i=0; i<Nf; i++) {
	  	for(j=0; j<Nf; j++) 
	      	printf ("%c  ", TabF[i][j]);
	  	printf("\n");
    	}
		printf("\n");
		// ########################################
	} if (dificuldade == 2){
		for(i=0; i<Nd; i++) {
	  	for(j=0; j<Nd; j++) 
	      	printf ("%c  ", TabD[i][j]);
	  	printf("\n");
    	}
		printf("\n");
	}
}

void mostra_tabCensurado(){
	int i, j;
	if (dificuldade ==1){
		printf("PONTOS: %d \n\n", pontos);
		for(i=0; i<Nf; i++) {
	  	for(j=0; j<Nf; j++) 
	      	printf ("%c  ", TabCensuradoF[i][j]);
	  	printf("\n");
    	}
		printf("\n");
		// ##########################
	} if (dificuldade == 2) {
		printf("PONTOS: %d \n\n", pontos);
		for(i=0; i<Nd; i++) {
	  	for(j=0; j<Nd; j++) 
	      	printf ("%c  ", TabCensuradoD[i][j]);
	  	printf("\n");
    	}
		printf("\n");
	}
}

void temporizador(int segundos){
    int i;
    limpar();
    for ( i = segundos; i > 0; i--)
    {
		mostra_tab2();
		printf("%d Segundos", i);
        sleep(1);
		system("cls");
    }
}

void corVermelho(){
    system("color 4F");
}

void corPreto(){
	system("color 0F");
}

void tirandoCensura(){
	int i, j, linhaAux1, linhaAux2, colunaAux1, colunaAux2;
	char carta1, carta2;
	system("cls");
	if (dificuldade == 1){
		mostra_tabCensurado();
		printf("Digite LinhaxColuna: ");
		scanf("%dx%d", &linhaAux1, &colunaAux1);
		if (linhaAux1 < 1 || linhaAux1 > Nf || linhaAux1==NULL || colunaAux1 < 1 || colunaAux1 > Nf || colunaAux1 == NULL){
			corVermelho();
			printf("ERRO");
			sleep(1);
			corPreto();
			tirandoCensura();
		}
		linhaAux1 = linhaAux1-1;
		colunaAux1 = colunaAux1-1;
		if (TabCensuradoF[linhaAux1][colunaAux1] == 'X'){
			TabCensuradoF[linhaAux1][colunaAux1] = TabF[linhaAux1][colunaAux1];
			carta1 = TabF[linhaAux1][colunaAux1];
		} else {
			printf("ERRO, %dx%d ja foi descoberto \n", linhaAux1+1, colunaAux1+1);
			sleep(1);
			tirandoCensura();
		}
		system("cls");
		mostra_tabCensurado();
		printf("Digite LinhaxColuna: ");
		scanf("%dx%d", &linhaAux2, &colunaAux2);
		if (linhaAux2 < 1 || linhaAux2 > Nf || linhaAux2==NULL || colunaAux2 < 1 || colunaAux2 > Nf || colunaAux2 == NULL){
			corVermelho();
			printf("ERRO");
			sleep(1);
			TabCensuradoF[linhaAux1][colunaAux1] = 'X';
			corPreto();
			tirandoCensura();
		}
		linhaAux2 = linhaAux2-1;
		colunaAux2 = colunaAux2-1;
		if (TabCensuradoF[linhaAux2][colunaAux2] == 'X'){
			TabCensuradoF[linhaAux2][colunaAux2] = TabF[linhaAux2][colunaAux2];
			carta2 = TabF[linhaAux2][colunaAux2];
		} else {
			printf("ERRO, %dx%d ja foi descoberto \n", linhaAux2+1, colunaAux2+1);
			TabCensuradoF[linhaAux1][colunaAux1] = 'X';
			sleep(1);
			tirandoCensura();
		}
	
		system("cls");
		if (carta1 == carta2){
			mostra_tabCensurado();
			printf("\033[32mAcertou! \033[m");
			sleep(2);
			TabCensuradoF[linhaAux1][colunaAux1] = carta1;
			TabCensuradoF[linhaAux2][colunaAux2] = carta2;
			if (sequencia >= 3){
				pontos = pontos+15;
			} else {
				pontos = pontos+10;
			}
			sequencia++;
		} else {
			mostra_tabCensurado();
			printf("\033[31mErrou! \033[m");
			sleep(2);
			corPreto();
			TabCensuradoF[linhaAux1][colunaAux1] = 'X';
			TabCensuradoF[linhaAux2][colunaAux2] = 'X';
			sequencia = 0;
		}
		mostra_tabCensurado();
		for (i = 0; i < Nf; i++)
		{
			for ( j = 0; j < Nf; j++)
			{
				if (TabCensuradoF[i][j] == 'X')
				tirandoCensura();
			}
		}
		// ##########################
	} if (dificuldade==2){
		mostra_tabCensurado();
		printf("Digite LinhaxColuna: ");
		scanf("%dx%d", &linhaAux1, &colunaAux1);
		if (linhaAux1 < 1 || linhaAux1 > Nd || linhaAux1==NULL || colunaAux1 < 1 || colunaAux1 > Nd || colunaAux1 == NULL){
			corVermelho();
			printf("ERRO");
			sleep(1);
			corPreto();
			tirandoCensura();
		}
		linhaAux1 = linhaAux1-1;
		colunaAux1 = colunaAux1-1;
		if (TabCensuradoD[linhaAux1][colunaAux1] == 'X'){
			TabCensuradoD[linhaAux1][colunaAux1] = TabD[linhaAux1][colunaAux1];
			carta1 = TabD[linhaAux1][colunaAux1];
		} else {
			printf("ERRO, %dx%d ja foi descoberto \n", linhaAux1+1, colunaAux1+1);
			sleep(1);
			tirandoCensura();
		}
		system("cls");
		mostra_tabCensurado();
		printf("Digite LinhaxColuna: ");
		scanf("%dx%d", &linhaAux2, &colunaAux2);
		if (linhaAux2 < 1 || linhaAux2 > Nd || linhaAux2 == NULL || colunaAux2 < 1 || colunaAux2 > Nd || linhaAux2 == NULL){
			corVermelho();
			printf("ERRO");
			sleep(1);
			TabCensuradoD[linhaAux1][colunaAux1] = 'X';
			corPreto();
			tirandoCensura();
		}
		linhaAux2 = linhaAux2-1;
		colunaAux2 = colunaAux2-1;
		if (TabCensuradoD[linhaAux2][colunaAux2] == 'X'){
			TabCensuradoD[linhaAux2][colunaAux2] = TabD[linhaAux2][colunaAux2];
			carta2 = TabD[linhaAux2][colunaAux2];
		} else {
			printf("ERRO, %dx%d ja foi descoberto \n", linhaAux2+1, colunaAux2+1);
			TabCensuradoD[linhaAux1][colunaAux1] = 'X'; //em caso de erro
			sleep(1);
			tirandoCensura();
		}
	
		system("cls");
		if (carta1 == carta2){
			mostra_tabCensurado();
			printf("\033[32mAcertou! \033[m");
			sleep(2);
			TabCensuradoD[linhaAux1][colunaAux1] = carta1;
			TabCensuradoD[linhaAux2][colunaAux2] = carta2;
			if (sequencia >= 3){
				pontos = pontos+15;
			} else {
				pontos = pontos+10;
			}
			sequencia++;
		} else {
			mostra_tabCensurado();
			printf("\033[31mErrou! \033[m");
			sleep(2);
			corPreto();
			TabCensuradoD[linhaAux1][colunaAux1] = 'X';
			TabCensuradoD[linhaAux2][colunaAux2] = 'X';
			sequencia = 0;
		}
		mostra_tabCensurado();
		for (i = 0; i < Nd; i++)
		{
			for ( j = 0; j < Nd; j++)
			{
				if (TabCensuradoD[i][j] == 'X')
				tirandoCensura();
			}
		}
	}
}

int main() {
	int jogarNovamente, M, N;
	system("cls");
	printf("Escolha a dificuldade:\n(1)Facil (2)Dificil: ");
	scanf("%d", &dificuldade);
	if (dificuldade == 1 || dificuldade == 2){
		inicia_tab();
		mostra_tab();
    	temporizador(5);
		tirandoCensura();
		system("cls");
		mostra_tabCensurado();
		printf("Parabens, voce fez %d Pontos \n", pontos);
		sleep(1);
		printf("Digite 1 para jogar novamente ou digite qualquer outra coisa para sair");
		scanf("%d", &jogarNovamente);
		if (jogarNovamente == 1){
			main();
		} else {
			system("pause");
			return 0;
		}
	} else {
		corVermelho();
		printf("ERRO");
		sleep(1);
		corPreto();
		main();
	}
}

