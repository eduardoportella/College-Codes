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

void em_ordem(struct no *atual){
    if (atual != NULL){
        em_ordem(atual -> esq);
        cout << atual -> dado << " ";
        em_ordem(atual -> dir);
    }
}

void buscaArvore(int valor){
    struct no *atual;

    atual = raiz;
    while (atual != NULL){
        if(valor == atual -> dado){
            cout << "Elemento encontrado!" << endl;
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
    insereArvore(5);
    insereArvore(20);
    insereArvore(4);
    insereArvore(7);
    buscaArvore(7);
    buscaArvore(3);
    em_ordem(raiz);

    system("pause");
    return 0;
}