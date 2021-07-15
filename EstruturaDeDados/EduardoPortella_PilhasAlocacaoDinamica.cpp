#include <iostream>
using namespace std;

struct no { //struct recursiva
    int dado;
    struct no *prox;
};
struct no *topo = NULL; //por enquanto, o valor da struct dentro da struct esta vazio

void push(int valor){ //colocando dados
    struct no *novo;

    novo = new (struct no);
    novo -> dado = valor;
    novo -> prox = topo;
    topo = novo;
}

void pop(){
    struct no *apaga;

    if (topo == NULL)
        cout << "Pilha vazia";
    else {
        apaga = topo;
        topo = topo -> prox;
        delete(apaga);
    }
}

void topoPilha(){ //variavel aux recebe a struct, mas recebe com os dados da variavel topo
    struct no *aux=topo;
    cout << "\nTopo: " << aux->dado << "\n";
}

void imprime(){
    struct no *aux=topo;
    while(aux!=NULL){
        cout << aux->dado << " ";
        aux  = aux->prox;
    }
}

int main(){
    push(10);
    push(30);
    push(40);
    imprime();
    topoPilha();
    pop();
    imprime();
    topoPilha();
    system("pause");
    return 0;
}