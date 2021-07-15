#include <iostream>
using namespace std;
const int TAM=6;

int pilha[TAM];
int topo=-1;

void push(int valor){
    if (topo==TAM-1){
        cout << "Pilha cheia!" << endl;
        return;
    }
    topo = topo+1;
    pilha[topo]=valor;
    cout << "Valor inserido com sucesso" << endl;
}

void pop(){
    if (topo==-1){
        cout << "Pilha vazia!" << endl;
        return;
    }
    cout << "O valor " << pilha[topo] << " foi removido!" << endl;
    topo=topo-1;
}

void topoPilha(){
    cout << "Valor do topo da pilha: " << pilha[topo] << endl;
}

void imprime() {
    int i;
    for ( i = 0; i <= topo; i++)
    {
        cout << pilha[i] << " " << endl;
    }
    
}

int main(){
    push(10);
    push(15);
    pop();
    topoPilha();
    imprime();
}