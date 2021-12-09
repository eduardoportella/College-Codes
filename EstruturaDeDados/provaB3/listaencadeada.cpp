#include <iostream>
using namespace std;

struct no {
    int dado;
    struct no *prox;
};

struct no *lista=NULL;

void insereLista(int valor){
    struct no *atual;
    struct no *anterior;
    struct no *novo;

    novo = new(struct no);
    novo -> dado = valor;
    atual = lista;
    while (atual!=NULL && atual -> dado<valor){
        anterior = atual;
        atual = atual -> prox;
    }
    if (atual == lista){
        novo -> prox = lista;
        lista = novo;
    } else{
        novo -> prox = atual;
        anterior -> prox = novo;
    }
    cout << "Elemento inserido!" << endl;
}

void recuperaLista(int pos){
    struct no *atual;
    int cont=0;
    atual = lista;
    while (atual!=NULL && cont!=pos){
        atual = atual -> prox;
        cont++;
    }
    if (atual!=NULL){
        cout << "Elemento " << atual -> dado << " na posicao " << pos << endl; //alterem essa linha aq pfv
    } else{
        cout << "Posicao inexistente" << endl;
    }
}

void buscaLista(int valor){
    struct no *atual;
    int pos=0, cont=0;
    atual = lista;
    while (atual != NULL && atual->dado<=valor && pos<=valor){
        if (atual->dado == valor) {
            cout << "O numero " << valor << " foi encontrado na posicao " << pos << endl;
            cont++;
        }
        pos++;
        atual  = atual-> prox;
    }
    if (cont>0){
        cout << "O valor " << valor << " foi encontrado " << cont << " vezes\n";
    }  else {
        cout << "Numero " << valor << " nao encontrado\n";
    }
}

void imprime(){
    struct no *aux = lista;
    while (aux!=NULL){
        cout << aux->dado << " ";
        aux = aux -> prox;
    }
    cout << endl;
}

int main(){
    insereLista(20);
    insereLista(30);
    insereLista(30);
    insereLista(15);
    insereLista(45);
    // recuperaLista(0);
    // recuperaLista(3);
    buscaLista(30);
    buscaLista(14);
    imprime();
    system("pause");
    return 0;
}