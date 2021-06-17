#include <iostream>

using namespace std;
const int TAM = 4;
int fila[TAM];
int inicio=0, fim=0, contador=0;

void insereFila(int valor){
    if (contador==TAM){
        cout << "Fila cheia \n";
        return;
    }
    contador++;
    fila[fim]=valor;
    if (fim==TAM-1){
        fim=0;
    } else{
        fim++;
    }
    cout << "Elemento inserido" << endl;
}

void removeFila(){
    if (contador==0){
        cout << "Fila vazia" << endl;
        return;
    }
    contador--;
    if (inicio==TAM-1){
        inicio=0;
    } else{
        inicio++;
    }
    cout << "Elemento removido" << endl;
}

void inicioFila(){
    if (contador==0){
        cout << "Fila vazia" << endl;
        return;
    }
    cout << "Inicio da fila: " << fila[inicio] << endl;
}

int main(){
    insereFila(10);
    insereFila(20);
    insereFila(5);
    insereFila(15);
    insereFila(2);
    insereFila(3);
    inicioFila();
    removeFila();
    removeFila();
    inicioFila();
}