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

void conta10() {
struct no *atual;
    int contador=0;
    atual = lista;
    if (atual == NULL){
        cout << "Lista vazia" << endl;
        return;
    }
    while (atual != NULL){
        if (atual->dado > 10){
            contador++;
        }
        atual = atual-> prox;
    }
    printf("Foram encontrados: %d", contador);
}

void imprime(){
    struct no *aux = lista;
    printf("\n");
    while (aux!=NULL){
        cout << aux->dado << " ";
        aux = aux -> prox;
    }
    cout << endl;
}

int main(){
    insereLista(20);
    insereLista(30);
    insereLista(15);
    conta10();
    imprime();
    system("pause");
    return 0;
}