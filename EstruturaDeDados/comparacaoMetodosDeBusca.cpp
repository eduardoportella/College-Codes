#include <iostream>
#include <cstdlib>

using namespace std;

const int TAM=20000;

struct no {
    int dado;
    struct no *esq;
    struct no *dir;
};

struct no *raiz = NULL;

int vetor[TAM];
float comparaS, comparaB, comparaABB;

int particao(int p, int r) {

   int pivo, temp, i, j;

   pivo = vetor[p];
   i=p-1;
   j=r+1;
   while (1) {
   	do {
      	j=j-1;
      } while (vetor[j]>pivo);
      do {
      	i=i+1;
      } while (vetor[i]<pivo);
      if (i<j)
      	{
         temp = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = temp;
      }
      else return j;
   }
}

void quick(int p, int r) {

   int q;

	if (p < r) {
   	  q = particao(p,r);
      quick(p,q);
      quick(q+1,r);
   }
}

void geraVetor() {

   int i;
   cout <<  "Gerando vetor randomico...." << endl;
   for (i=0;i<TAM;i++) {
      vetor[i]=rand();
   }
}

void imprime() {
    int i;

    for (i=0; i<TAM; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

void buscaSequencial(int valor){
   int i=0;

   while (i<TAM && valor>vetor[i]){
      i++;
      comparaS++;
   }
//    if (i != TAM && valor == vetor[i])
//       cout << "Achei na posicao " << i << endl;
//    else
//       cout << "Nao achei o valor" << endl;
}

void buscaBinaria(int chave){
   int primeiro = 0;
   int ultimo = TAM-1;
   int meio;

   while(primeiro <= ultimo){
      comparaB++;
      meio = (ultimo + primeiro)/2;
      if (vetor[meio] == chave){
        //  cout << "Achei na posicao " << meio << endl;
         return;
      }
      if (chave < vetor[meio]){
         ultimo = meio-1;
      } else {
         primeiro = meio+1;
      }
      
   }
    // cout << "Nao achei" << endl;
}

void insereArvore(int valor){
    struct no *atual, *anterior, *novo;

    novo = new(struct no);
    novo->dado = valor;
    novo->esq = NULL;
    novo->dir = NULL;

    if (raiz == NULL){
        raiz = novo;
        return;
    }

    atual = raiz;

    while (atual != NULL){
        anterior = atual;
        if (valor < atual -> dado)
            atual = atual -> esq;
        else
            atual = atual -> dir;
    }
    if (valor < anterior -> dado)
        anterior -> esq = novo;
    else
        anterior -> dir = novo;
}

void buscaArvoreBinaria(int valor){
    struct no *atual;

    atual = raiz;
    while(atual != NULL){
        comparaABB++;
        if (valor == atual -> dado){
            // cout << "Elemento encontrado!" << endl;
            return;
        }
        if (valor < atual -> dado){
            atual = atual -> esq;
        } else {
            atual = atual -> dir;
        }
        // cout << "Elemento nao encontrado!" << endl;
        
    }
}

void geraArvore(){
    int i;
    for ( i = 0; i < TAM; i++){
        insereArvore(vetor[i]);
    }
}

int main(){
    int i, chavebusca;

    geraVetor();
    geraArvore();
    cout << "Classificando vetor... " << endl;
    quick(0,TAM-1);
    cout << "Fazendo buscas" << endl;

    comparaS=0;
    comparaB=0;
    comparaABB=0;
    for (i=0;i<1000;i++) {
        chavebusca=rand();
        buscaSequencial(chavebusca);
        buscaBinaria(chavebusca);
        buscaArvoreBinaria(chavebusca);
    }
    
    cout << "Sequencial: Numero medio de operacoes de comparacao " << comparaS/1000 << endl;
    cout << "Binaria: Numero medio de operacoes de comparacao " << comparaB/1000 << endl;
    cout << "Arvore de Busca Binaria: Numero medio de operacoes de comparacao " << comparaABB/1000 << endl;
}
