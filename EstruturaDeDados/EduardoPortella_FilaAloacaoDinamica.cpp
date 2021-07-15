#include <iostream>
using namespace std;

struct no {
    int dado;
    struct no *prox;
};

struct no *inicio=NULL;
struct no *fim=NULL;

void insereF(int valor){
    struct no *novo;

    novo = new(struct no);
    novo -> dado = valor;
    novo -> prox =NULL;
    if (fim == NULL){
        fim = novo;
        inicio = novo;
    } else {
        fim -> prox =novo;
        fim = novo;
    }
}

void removeF(){
    struct no *apaga;
    if (inicio == NULL){
        cout << "Fila vazia";
        return;
    }
    apaga=inicio;
    inicio=inicio->prox;
    delete(apaga);
    if (inicio == NULL){
        fim = NULL;
    }
}

void inicioF(){
    
}

void imprime(){
    struct no *aux = inicio;
    while (aux != NULL){
        cout << aux->dado << " ";
        aux = aux-> prox;
    }
    cout << endl;
}

int main(){
    insereF(10);
    insereF(20);
    insereF(30);
    imprime();
}