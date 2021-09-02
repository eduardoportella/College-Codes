#include <iostream>
using namespace std;

struct no {
    int dado;
    struct no *prox;
    struct no *ant;
};

struct no *lista=NULL;

void insereLista(int valor){
    struct no *atual;
    struct no *anterior=NULL;
    struct no *novo;

    novo = new (struct no);
    novo->dado = valor;
    atual = lista;
    while (atual!=NULL && atual->dado<valor){
        anterior=atual;
        atual=atual -> prox;
    }
    novo->prox = atual;
    novo ->ant = anterior;
    if (anterior!=NULL){
        anterior->prox = novo;
    } else{
        lista =novo;
    } if (atual != NULL){ 
        atual->ant = novo;
    }
}

void imprime(){
    struct no *aux = lista;
    if (aux == NULL){
        cout << "lista vazia";
    }
    while (aux!=NULL){
        cout << aux->dado << " ";
        aux = aux -> prox;
    }
    cout << endl;
}

void contaLista(int valor){
    struct no *atual;
    int cont=0;

    atual=lista;
    while (atual!= NULL && atual->dado<=valor){
        if (atual->dado == valor){
            cont++;
        }
        atual = atual->prox;
    }
    if (cont==0){
        cout << "Elemento não encontrado" << endl;
    } else {
        if (cont==1){
            cout << "Elemento " << valor << " encontrado " << cont << " vez" << endl;
        } else{
            cout << "Elemento " << valor << " encontrado " << cont << " vezes" << endl;
        }
    }
}

int main(){
    insereLista(2);
    insereLista(5);
    insereLista(1);
    insereLista(3);
    insereLista(5);
    contaLista(1);
    contaLista(5);
    imprime();
}