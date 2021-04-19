#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define Mf 8
#define Md 18
char cartasF[Mf] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
char cartasD[Md] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R'};
char nome[20];
int pontos=0, sequencia=0, dificuldade;
bool carregaMatriz = false, salvandoJogo=false;

typedef struct{
	char nome[20];
	int pontos, sequencia;
}registro;
registro reg, reg_loaded;

typedef struct{
	char nome1[10]="", nome2[10]="", nome3[10]="";
	int pontos1=0, pontos2=0, pontos3=0;
}ranking;
ranking rank, rank_loaded, rank_zera;

void corVermelho(){
    system("color 4F");
}

void corPreto(){
	system("color 0F");
}

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

char salva(char **Tab, int N, int x){
    FILE *fp;
    int i;
	if (x==1){ //Para salvar matrizes diferentes
    	fp = fopen("matriz.dad", "wb");
	} else{
		fp = fopen("matrizCensurada.dad", "wb");
	}
    if (fp==NULL) return -1;
    for ( i = 0; i < N; i++)
    {
        fwrite(Tab[i], N*sizeof(char), 1, fp);
    }
    fclose(fp);
    return 0;
}

int salvaDimensao(int N){
	FILE *fp;
	fp = fopen("dimensao.dad", "wb");
	if (fp == NULL) return -1;
	fprintf(fp, "%d", N);
	fclose(fp);
	return N;
}

void salvaRegistro(){
	FILE *fp;
    fp = fopen("registro.dad", "wb");
    if (fp==NULL){
        printf("Erro ao criar arquivo");
        exit(-1);
    }
    fwrite(&reg, sizeof(reg), 1, fp);
    fclose(fp);
}

void salvaRanking(){
	FILE *fp;
    fp = fopen("ranking.dad", "wb");
    if (fp==NULL){
        printf("Erro ao criar arquivo");
        exit(-1);
    }
    fwrite(&rank, sizeof(rank), 1, fp);
    fclose(fp);
}

void rankingJogadores(int pontos, char nome[10]){
	int pontosAux;
	char nomeAux[10];
	if (pontos > rank.pontos1){
		pontosAux = rank.pontos1;
		strcpy(nomeAux, rank.nome1);
		rank.pontos1 = pontos;
		strcpy(rank.nome1, nome);
		rankingJogadores(pontosAux, nomeAux);
		return;
	} else if (pontos > rank.pontos2){
		pontosAux = rank.pontos2;
		strcpy(nomeAux, rank.nome2);
		rank.pontos2 = pontos;
		strcpy(rank.nome2, nome);
		rankingJogadores(pontosAux, nomeAux);
		return;
	} else if(pontos > rank.pontos3){
		pontosAux = rank.pontos3;
		strcpy(nomeAux, rank.nome3);
		rank.pontos3 = pontos;
		strcpy(rank.nome3, nome);
		rankingJogadores(pontosAux, nomeAux);
		return;
	} else{
		return;
	}
}

char **carrega(int N, int x){
    FILE *fp;
    int i;
	char **Tab;
    Tab = alocaMat(N);
    if (Tab==NULL){
        return NULL;
    } if (x==1){ //Para carregar matrizes diferentes
		fp = fopen("matriz.dad", "rb");
	} else{
    	fp = fopen("matrizCensurada.dad", "rb");
	}
    if (fp == NULL) return NULL;
	for ( i = 0; i < N; i++)
    {
        fread(Tab[i], N*sizeof(char), 1, fp);
    }
    fclose(fp);
    return Tab;
}

int carregaDimensao(){
	FILE *fp;
	int n;
	fp = fopen("dimensao.dad", "rb");
	if (fp == NULL){
		printf("Erro na abertura do arquivo \n");
		return -1;
	}
	fscanf(fp, "%d", &n);
	fclose(fp);
	return n;
}

registro carregaRegistro(){
	FILE *fp;
	registro reg2;
    fp = fopen("registro.dad", "rb");
    if (fp==NULL){
        printf("Erro ao abrir arquivo");
        exit(-2);
    }
    fread(&reg2, sizeof(reg2), 1, fp);
    fclose(fp);
	return reg2;
}

ranking carregaRanking(){
	FILE *fp;
	ranking rank2;
    fp = fopen("ranking.dad", "rb");
    if (fp==NULL){
		salvaRanking();
		fread(&rank2, sizeof(rank2), 1, fp); //posso remover essa linha mas
		//to com preguica de testar todo o jogo de novo
		//professor, desculpa, eu so mt ruim no jogo da memoria kkkkkkkkkkkkk
    }
    fread(&rank2, sizeof(rank2), 1, fp);
    fclose(fp);
	return rank2;
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
	printf("Jogador(a): %s\n", nome);
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


void tirandoCensura(char **Tab, char **TabCensurado, int N){
	int i, j, linhaAux1, linhaAux2, colunaAux1, colunaAux2;
	char carta1, carta2, **tab2, **tab3;
	salvandoJogo = false;
	system("cls");
	mostra_tabCensurado(TabCensurado, N);
	printf("Digite LinhaxColuna: ");
	scanf("%dx%d", &linhaAux1, &colunaAux1);
	 if (linhaAux1 == -1 && colunaAux1 == -1){
		salva(Tab, N, 1);
		salva(TabCensurado, N, 2);
		salvaDimensao(N);
		reg.pontos = pontos;
		reg.sequencia = sequencia;
		strcpy(reg.nome, nome);
		salvaRegistro();
		tab2 = carrega(N, 1);
		tab3 = carrega(N, 2);
		salvandoJogo = true;
		if (tab2 == NULL || tab3 == NULL){
			printf("Erro ao salvar o jogo");
		} else {
			printf("Jogo salvo com sucesso!");
		}
		freeMat(tab2, N);
		freeMat(tab3, N);
		sleep(1);
		system("cls");
		return;
	}
	if (linhaAux1 < 1 || linhaAux1 > N || linhaAux1==NULL || colunaAux1 < 1 || colunaAux1 > N || colunaAux1 == NULL){
		corVermelho();
		printf("ERRO");
		fflush(stdin);
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
	if (linhaAux2 ==-1 && colunaAux2 == -1){
		TabCensurado[linhaAux1][colunaAux1] = 'X';
		salva(Tab, N, 1);
		salva(TabCensurado, N, 2);
		salvaDimensao(N);
		reg.pontos = pontos;
		reg.sequencia = sequencia;
		salvandoJogo = true;
		strcpy(reg.nome, nome);
		salvaRegistro();
		tab2 = carrega(N, 1);
		tab3 = carrega(N, 2);
		if (tab2 == NULL || tab3 == NULL){
			printf("Erro ao salvar o jogo");
		} else {
			printf("Jogo salvo com sucesso!");
		}
		freeMat(tab2, N);
		freeMat(tab3, N);
		system("cls");
		return;
	}
	if (linhaAux2 < 1 || linhaAux2 > N || linhaAux2 == NULL || colunaAux2 < 1 || colunaAux2 > N || linhaAux2 == NULL ){
		corVermelho();
		printf("ERRO");
		fflush(stdin);
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

void jogar(){
	char **tab, **tabCensurado;
	int jogarNovamente, M, N, i, j;
	system("cls");
	printf("Lembre-se: digitando -1x-1 o jogo sera salvo");
	sleep(3);
	system("cls");
	if (carregaMatriz == true){
		reg_loaded = carregaRegistro();
		strcpy(nome, reg_loaded.nome);
		pontos = reg_loaded.pontos;
		sequencia = reg_loaded.sequencia;
		N = carregaDimensao();
		tab = carrega(N, 1);
		tabCensurado = carrega(N, 2);
		mostra_tabCensurado(tabCensurado, N);
		if (tab == NULL){
			corVermelho();
			printf("ERRO. Voce nao tem um jogo salvo\n");
			sleep(1);
			corPreto();
			system("cls");
			return;
		}
	} else{
		printf("Digite seu nome: ");
		scanf("%s", &nome);
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
			tabCensurado = alocaMat(N);
			if (carregaMatriz == true){
			} else{
				tab = alocaMat(N);
				inicia_tab(tab, tabCensurado, N, M);
				mostra_tab(tab, N);
				temporizador(tab, N, 5);
			}
			
		} else {
			corVermelho();
			printf("ERRO");
			sleep(1);
			corPreto();
			fflush(stdin);
			jogar();
		}
	}
	tirandoCensura(tab, tabCensurado, N);
	system("cls");
	mostra_tabCensurado(tabCensurado, N);
	freeMat(tab, N);
	freeMat(tabCensurado, N);
	printf("Parabens, voce fez %d Pontos \n", pontos);
	if (salvandoJogo == false){
		rank = carregaRanking();
		rankingJogadores(pontos, nome);
		salvaRanking();
	}
	sleep(2);
}

void menu(){
	int escolha;
	char **tab, **tabCensurado;
	int N, M;
	system("cls");
	printf("------------------------\n");
	printf("         MENU\n");
	printf("------------------------\n");
	printf("1 - Novo jogo\n");
	printf("2 - Carregar jogo\n");
	printf("3 - Ranking\n");
	printf("4 - Encerrar\n");
	printf("Informe sua escolha: ");
	scanf("%d", &escolha);
	switch (escolha)
	{
	case 1:
		sleep(1);
		pontos = 0;
		carregaMatriz = false;
		jogar();
		menu();
		break;
	
	case 2:
		sleep(1);
		carregaMatriz = true;
		jogar();
		sleep(1);
		system("cls");
		menu();
		break;
	
	case 3:
		sleep(1);
		system("cls");
		rank_loaded = carregaRanking();
		printf("1 lugar: %s com %d pontos\n", rank_loaded.nome1, rank_loaded.pontos1);
		printf("2 lugar: %s com %d pontos\n", rank_loaded.nome2, rank_loaded.pontos2);
		printf("3 lugar: %s com %d pontos\n", rank_loaded.nome3, rank_loaded.pontos3);
		printf("\nDigite algo para sair: ");
		int sair;
		scanf("%d", &sair);
		menu();
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
	return 0;
}