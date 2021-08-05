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

void contaLista(){
    struct no *atual;
    int cont=0;
    atual = lista;
    if (atual == NULL){
        cout << "Lista vazia" << endl;
        return;
    }
    while (atual != NULL){
        if (atual->dado > 10){
            cont++;
        }
        atual = atual-> prox;
    }
    if (cont==0){
        cout << "Nao foi encontrado algum valor maior que 10" << endl;
    } else if (cont==1){
        cout << "Foi encontrado 1 valor maior que 10" << endl;
    } else {
        cout << "Foram encontrados " << cont << " valores maiores que 10" << endl;
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
    insereLista(1);
    insereLista(5);
    insereLista(7);
    insereLista(11);
    insereLista(15);
    contaLista();
    imprime();
    system("pause");
    return 0;
}