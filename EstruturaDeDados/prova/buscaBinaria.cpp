#include <iostream>
using namespace std;

struct no {
    int dado;
    struct no *esq;
    struct no *dir;
};

struct no* raiz=NULL;

void insereArvore(int valor){
    struct no *atual, *anterior, *novo;

    novo = new(struct no);
    novo -> dado = valor;
    novo -> esq = NULL;
    novo -> dir = NULL;
    if (raiz == NULL){
        raiz = novo;
        return;
    }

    atual = raiz;
    while (atual!=NULL){
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
    cout << "Elemento inserido!" << endl;
}

void buscaArvore(int valor){
    struct no *atual, *FilhoDireito, *FilhoEsquerdo;

    atual = raiz;
    while (atual != NULL){
        if(valor == atual -> dado){
            cout << "Elemento " << atual -> dado << " encontrado!" << endl;
            FilhoDireito = atual -> dir;
            FilhoEsquerdo = atual -> esq;
            if (FilhoDireito -> dado == NULL){
                cout << "Filho direito não existe" << endl;
            } else {
                cout << "Filho direito: " << FilhoDireito -> dado << endl;
            }

            if (FilhoEsquerdo -> dado == NULL){
                cout << "Filho esquerdo não existe" << endl;
            } else {
                cout << "Filho esquerdo: " << FilhoEsquerdo -> dado << endl;
            }
            
            return;
        }
        if (valor < atual -> dado)
            atual = atual -> esq;
        else
            atual = atual -> dir;
    }
    cout << "Elemento nao encontrado!" << endl;
}

int main(){
    insereArvore(8);
    insereArvore(3);
    insereArvore(10);
    insereArvore(15);
    insereArvore(7);
    insereArvore(2);
    buscaArvore(8);

    return 0;
}