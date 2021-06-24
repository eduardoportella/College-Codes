#include <iostream>

using namespace std;

const int TAM = 10;
int lista[TAM];
int tamanho=0;

void insereLista(int valor, int posicao){
    int i;
    if (tamanho==TAM){
        cout << "Lista cheia" << endl;
        return;
    }
    if (posicao<0 || posicao>tamanho){
        cout << "Posicao invalida" << endl;
        return;
    }
    for (i = tamanho; i>posicao; i--)
    {
        lista[i] = lista[i-1];
    }
    lista[posicao] = valor;
    tamanho++;
    cout << "Elemento inserido com sucesso" << endl;
}

void imprime(){
    int i;
    for ( i = 0; i < tamanho; i++)
    {
        cout << lista[i] << " ";
    }
    cout << endl;
}

void recuperaLista(int posicao){
    if (posicao<0 || posicao>=tamanho){
        cout << "Posicao invalida" << endl;
        return;
    }
    cout << "Elemento e " << lista[posicao] << endl;
}

void buscaLista(int valor){
// Verifica se o valor esta na lista
}

int main(){
    insereLista(5,0);
    insereLista(10,1);
    insereLista(8,0);
    imprime();
}