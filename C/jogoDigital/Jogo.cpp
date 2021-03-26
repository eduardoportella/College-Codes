#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#define Mf 8
#define Md 18
char cartasF[Mf] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
char cartasD[Md] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R'};
int pontos=0, sequencia=0, dificuldade;
char nome;

char **alocaMat(int N){
    char **tab;
	int i;
    tab = (char **) malloc(N*sizeof(char *));
    if (tab == NULL){
        printf("Erro ao alocar memoria \n");
        exit(-1);
    }
    for ( i = 0; i < N; i++)
    {
        tab[i] = (char *) malloc(N*sizeof(char));
        if (tab[i] == NULL){
            printf("Erro ao alocar memoria\n");
            exit(-1);
        }
    }
    return tab;
	
}

char **alocaMatCensura(int N){
    char **TabCensurado;
	int i;
    TabCensurado = (char **) malloc(N*sizeof(char *));
    if (TabCensurado == NULL){
        printf("Erro ao alocar memoria \n");
        exit(-1);
    }
    for ( i = 0; i < N; i++)
    {
        TabCensurado[i] = (char *) malloc(N*sizeof(char));
        if (TabCensurado[i] == NULL){
            printf("Erro ao alocar memoria\n");
            exit(-1);
        }
    }
    return TabCensurado;
}

void inicia_tab(char **tab, char **TabCensurado, int N, int M) {
	int x, cont, i, j;
	srand(time(NULL));
	for(i=0; i<N; i++)
	  	for(j=0; j<N; j++){
			tab[i][j]= 'Z';
			TabCensurado[i][j] = 'X';
	  	}
	
		
    	x=0;
    	cont=0;
		while (x<M){  // para cada elemento em V
			i=rand() % N;
			j=rand() % N;
			if (tab[i][j] == 'Z') {
				if (dificuldade == 1){
		   		tab[i][j] = cartasF[x];
			} else {
				tab[i][j] = cartasD[x];
			}
		   	cont++;
	    	}
			if (cont > 1) {
				x++;
		    	cont = 0;
			}
		}	
}

void mostra_tab(char **Tab, int N) {
	int i, j;
	for(i=0; i<N; i++) {
	  	for(j=0; j<N; j++) 
	      	printf("%c  ", Tab[i][j]);
	  	printf("\n");
    }
}

void mostra_tabCensurado(char **TabCensurado, int N){
	int i, j;
	printf("PONTOS: %d \n\n", pontos);
		for(i=0; i<N; i++) {
	  	for(j=0; j<N; j++) 
	      	printf ("%c  ", TabCensurado[i][j]);
	  	printf("\n");
    	}
	printf("\n");
}

void temporizador(char **Tab, int N, int segundos){
    int i;
    system("cls");
    for ( i = segundos; i > 0; i--)
    {
		mostra_tab(Tab, N);
		printf("\n");
		if (i>1)
			printf("%d Segundos", i);
		else
			printf("%d Segundo", i);
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

void tirandoCensura(char **Tab, char **TabCensurado, int N){
	int i, j, linhaAux1, linhaAux2, colunaAux1, colunaAux2;
	char carta1, carta2;
	system("cls");
	mostra_tabCensurado(TabCensurado, N);
	printf("Digite LinhaxColuna: ");
	scanf("%dx%d", &linhaAux1, &colunaAux1);
	if (linhaAux1 < 1 || linhaAux1 > N || linhaAux1==NULL || colunaAux1 < 1 || colunaAux1 > N || colunaAux1 == NULL){
		corVermelho();
		printf("ERRO");
		sleep(1);
		corPreto();
		tirandoCensura(Tab, TabCensurado, N);
		return;
	}
	linhaAux1 = linhaAux1-1;
	colunaAux1 = colunaAux1-1;
	if (TabCensurado[linhaAux1][colunaAux1] == 'X'){
		TabCensurado[linhaAux1][colunaAux1] = Tab[linhaAux1][colunaAux1];
		carta1 = Tab[linhaAux1][colunaAux1];
	} else {
		printf("ERRO, %dx%d ja foi descoberto \n", linhaAux1+1, colunaAux1+1);
		sleep(1);
		tirandoCensura(Tab, TabCensurado, N);
		return;
	}
	system("cls");
	mostra_tabCensurado(TabCensurado, N);
	printf("Digite LinhaxColuna: ");
	scanf("%dx%d", &linhaAux2, &colunaAux2);
	if (linhaAux2 < 1 || linhaAux2 > N || linhaAux2 == NULL || colunaAux2 < 1 || colunaAux2 > N || linhaAux2 == NULL ){
		corVermelho();
		printf("ERRO");
		sleep(1);
		TabCensurado[linhaAux1][colunaAux1] = 'X';
		corPreto();
		tirandoCensura(Tab, TabCensurado, N);
		return;
	}
	linhaAux2 = linhaAux2-1;
	colunaAux2 = colunaAux2-1;
	if (TabCensurado[linhaAux2][colunaAux2] == 'X'){
		TabCensurado[linhaAux2][colunaAux2] = Tab[linhaAux2][colunaAux2];
		carta2 = Tab[linhaAux2][colunaAux2];
	} else {
		printf("ERRO, %dx%d ja foi descoberto \n", linhaAux2+1, colunaAux2+1);
		TabCensurado[linhaAux1][colunaAux1] = 'X'; //em caso de erro
		sleep(1);
		tirandoCensura(Tab, TabCensurado, N);
		return;
	}
	
	system("cls");
	if (carta1 == carta2){
		mostra_tabCensurado(TabCensurado, N);
		printf("\033[32mAcertou! \033[m");
		sleep(2);
		TabCensurado[linhaAux1][colunaAux1] = carta1;
		TabCensurado[linhaAux2][colunaAux2] = carta2;
		if (sequencia >= 3){
			pontos = pontos+15;
		} else {
			pontos = pontos+10;
		}
		sequencia++;

		for (i = 0; i < N; i++)
		{
			for ( j = 0; j < N; j++)
			{
				if (TabCensurado[i][j] == 'X'){
					tirandoCensura(Tab, TabCensurado, N);
					return;
				}
			}
		}
	} else {
		mostra_tabCensurado(TabCensurado, N);
		printf("\033[31mErrou! \033[m");
		sleep(2);
		corPreto();
		TabCensurado[linhaAux1][colunaAux1] = 'X';
		TabCensurado[linhaAux2][colunaAux2] = 'X';
		sequencia = 0;
		tirandoCensura(Tab, TabCensurado, N);
		return;
	}
	mostra_tabCensurado(TabCensurado, N);
}

void freeMat(char **matriz, int N){
    int i;
    for ( i = 0; i < N; i++)
    {
        if (matriz[i] != NULL){
            free(matriz[i]);
        }
    }
    free(matriz);
}

void jogar(){
	char **tab, **tabCensurado;
	int jogarNovamente, M, N;
	system("cls");
	printf("Digite seu nome");
	scanf("%c", &nome);
	printf("Escolha a dificuldade:\n(1)Facil (2)Dificil: ");
	scanf("%d", &dificuldade);
	if (dificuldade == 1 || dificuldade == 2){
		if (dificuldade == 1){
			N = 4;
			M = 8;
		} else{
			N = 6;
			M = 18;
		}
		tab = alocaMat(N);
		tabCensurado = alocaMatCensura(N);
		inicia_tab(tab, tabCensurado, N, M);
		mostra_tab(tab, N);
		temporizador(tab, N, 5);
		tirandoCensura(tab, tabCensurado, N);
		system("cls");
		mostra_tabCensurado(tabCensurado, N);
		freeMat(tab, N);
		freeMat(tabCensurado, N);
		printf("Parabens, voce fez %d Pontos \n", pontos);
		sleep(1);
	} else {
		corVermelho();
		printf("ERRO");
		sleep(1);
		corPreto();
		jogar();
	}
}

void menu(){
	int escolha;
	printf("------------------------\n");
	printf("         MENU\n");
	printf("------------------------\n");
	printf("1 - Novo jogo\n");
	printf("2 - Carregar jogo em andamento\n");
	printf("3 - Ranking\n");
	printf("4 - Encerrar\n");
	printf("Informe sua escolha: ");
	scanf("%d", &escolha);
	switch (escolha)
	{
	case 1:
		sleep(1);
		jogar();
		break;
	
	case 2:
		sleep(1);
		break;
	
	case 3:
		sleep(1);
		break;

	case 4:
		sleep(1);
		break;

	default:
		corVermelho();
		printf("ERRO");
		sleep(1);
		corPreto();
		menu();
		break;
	}
}

int main() {
	menu();

	system("pause");
	return 0;
}

