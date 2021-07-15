#include <iostream>

using namespace std;

const int TAM=6;
int lista[TAM];
int tamanho=0;

void insereLista(int valor){
    int i;
    if (tamanho==TAM){
        cout << "Lista cheia " << endl;
        return;
    }
    for (i=tamanho; i>0 && valor<lista[i-1]; i--){
        lista[i]=lista[i-1];
    }
    lista[i] = valor;
    tamanho++;
    cout << "Elemento inserido" << endl;
    return;
}

void removeLista(int valor){
    int i, j;
    for (i = 0; i < tamanho; i++){
        if (lista[i] == valor){
            for (j = i; tamanho--; j++){
                lista[j]=lista[j+1];
            }
            tamanho--;
            cout << "Elemento removido" << endl;
            return;
        }
    }
    cout << "Elemento nao encontrado" << endl;
}

void buscaLista(int valor){
    int i;
    for ( i = 0; i < tamanho; i++)
    {
        if (lista[i] == valor){
            cout << "O valor " << valor << " esta na posicao " << i+1 << endl;
            return;
        }
    }
    cout << "O valor " << valor << " nao esta na lista" << endl;
}

void imprime(){
    int i;
    for (i=0; i<tamanho; i++){
        cout << lista[i] << " ";
    }
    cout << endl;
}

int main(){
    insereLista(9);
    insereLista(16);
    insereLista(5);
    insereLista(11);
    imprime();
    buscaLista(11);
    removeLista(16);
    removeLista(8);
    imprime();

    system("pause");
    return 0;
}