#include <iostream>

using namespace std;

const int TAM = 10;

int vertice[TAM];
int adj[TAM][TAM];
int n_vertices=0;

void imprime_grafo() {

    cout << "\nGrafo e: " << endl;
    for (int i=0; i<n_vertices; i++) {
        cout << vertice[i] << " -> " ;
        for (int j=0; j<n_vertices; j++)
            if (adj[i][j]!=0)
                cout << "<" << vertice[i] << "," << vertice[j] << "> ";
        cout << endl;
    }
}

void insere(int valor){
    if(n_vertices < TAM){
        for (int i = 0; i < n_vertices; i++){
            if(vertice[i] == valor){
                cout << "Repetido" << endl;
                return;
            }
        }
        vertice[n_vertices] = valor;
        n_vertices++;
    } else {
        cout << "Vetor cheio" << endl;
    }
}

void inicia_grafo(){
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            adj[i][j] = 0;
        }
    }
}

void insere_aresta(int origem, int destino){
    int i=0, j=0;

    while(i < n_vertices && vertice[i] != origem){
        i++;
    } if (i == n_vertices){
        cout << "Nao achei origem" << endl;
        return;
    }

    while(j < n_vertices && vertice[j] != destino){
        j++;
    } if (j == n_vertices){
        cout << "Nao achei destino" << endl;
        return;
    }

    adj[i][j] =1;
}

void remove_aresta(int origem, int destino){
    int i=0, j=0;

    while(i < n_vertices && vertice[i] != origem){
        i++;
    } if (i == n_vertices){
        cout << "Nao achei origem" << endl;
        return;
    }

    while(j < n_vertices && vertice[j] != destino){
        j++;
    } if (j == n_vertices){
        cout << "Nao achei destino" << endl;
        return;
    }

    adj[i][j] = 0;
}

void ha_aresta(int origem, int destino){
    int i=0, j=0;

    while(i < n_vertices && vertice[i] != origem){
        i++;
    } if (i == n_vertices){
        cout << "Nao achei origem" << endl;
        return;
    }

    while(j < n_vertices && vertice[j] != destino){
        j++;
    } if (j == n_vertices){
        cout << "Nao achei destino" << endl;
        return;
    }

    if(adj[i][j] == 1){
        cout << "Ha uma aresta" << endl;
    } else {
        cout << "Nao ha uma aresta" << endl;
    }


}

int main() {
    inicia_grafo();

    insere(10);
    insere(20);
    insere(30);
    insere(40);
    insere(50);
    insere_aresta(0,10);
    insere_aresta(10,40);
    insere_aresta(20,30);
    insere_aresta(20,50);
    insere_aresta(30,40);
    insere_aresta(50,40);
    insere_aresta(60,10);
    insere_aresta(10,60);
    imprime_grafo();

    ha_aresta(0, 10);
    ha_aresta(10,40);
    ha_aresta(30,50);
    cout << "" << endl;

    remove_aresta(0,20);
    remove_aresta(40,10);
    remove_aresta(20,30);
    remove_aresta(20,50);
    remove_aresta(60,10);
    remove_aresta(10,60);

    imprime_grafo();
}
