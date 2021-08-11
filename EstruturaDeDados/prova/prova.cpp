#include <iostream>
using namespace std;
const int TAM=5;

int pilha[TAM];
int topo=-1;

void push_dupla(int valor1, int valor2){
    if (topo==TAM-1 || topo+1==TAM-1){
        cout << "Pilha cheia" << endl;
        return;
    }
    topo = topo+2;
    pilha[topo-1]=valor1;
    pilha[topo]=valor2;

    cout << "Os valores foram inseridos com sucesso" << endl;
}

void pop_dupla(){
    if (topo==-1){
        cout << "Pilha vazia" << endl;
        return;
    }
    cout << "Os valores " << pilha[topo] << " e " << pilha[topo-1] << " foram removidos com sucesso" << endl;
    topo=topo-2;
}

void imprime() {
    int i;
    for (i = topo; i >= 0; i--)
    {
        cout << pilha[i] << endl;
    }
}

int main(){
    push_dupla(10,15);
    push_dupla(20, 25);
    push_dupla(30, 35);
    push_dupla(40, 45);
    imprime();
    pop_dupla();
    imprime();
}