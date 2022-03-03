#include <iostream>

using namespace std;

const int TAM = 10;  	/* Tamanho do vetor */

struct no {
    int chave;
    struct no *prox;
};

struct no *vetor[TAM];

void inicia() {
    for (int i=0; i<TAM; i++) {
        vetor[i] = NULL;
    }
}

int espalha(int chave) {
    return chave%TAM;
}

void insere(int chave){
    int pos;
    struct no *atual, *anterior, *novo;

    pos=espalha(chave);
    atual = vetor[pos];
    while(atual!=NULL){
        if (atual-> chave == chave){
            cout << "Chave repetida!" << endl;
            return;
        }
        anterior = atual;
        atual = atual -> prox;
    }
    novo = new (struct no);
    novo->chave = chave;
    novo->prox = NULL;
    if(vetor[pos] == NULL)
        vetor[pos] = novo;
     else anterior->prox = novo;
    
}

void busca(int chave){
    int pos;
    struct no *atual;

    pos=espalha(chave);
    atual = vetor[pos];
    while (atual!=NULL) {
        if(atual->chave == chave){
            cout << "Chave encontrada!" << endl;
            return;
        }
        atual = atual->prox;
    }
    cout << "Chave nao encontrada!" << endl;
}

void imprime() {
    struct no *atual;
    int i;

    for (i=0; i<TAM; i++) {
        cout << i << " -> ";
        atual=vetor[i];
        while (atual!=NULL) {
            cout << atual->chave << " ";
            atual=atual->prox;
        }
        cout << endl;
    }
}

int main() {
    inicia();
    insere(4);
    insere(14);
    insere(14);
    insere(12);
    insere(16);
    busca(4);
    busca(14);
    busca(22);
    busca(30);
    busca(24);
    imprime();
}
