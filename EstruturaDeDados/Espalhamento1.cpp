#include <iostream>

using namespace std;

const int TAM = 10; /* Tamanho m�ximo do vetor */

int vetor[TAM];

void inicia(void) {
    int i;

    for (i = 0; i < TAM; i++) {
        vetor[i] = -1;
    }
}

void imprime(void) {
    int i;

    for (i = 0; i < TAM; i++) {
        cout << i << "-> " << vetor[i] << endl;
    }
}

int espalha(int chave) { // h(chave) = chave%TAM
    return chave % TAM;
}

int reespalha(int pos) { // rh(pos) = (pos+1)%TAM
    return (pos + 1) % TAM;
}

void insere(int chave) { 
    int cont = 0;
    int pos;

    pos = espalha(chave);
    while (vetor[pos] != -1 && cont != TAM) {
        pos = reespalha(pos);
        cont++;
    }
    if (cont == TAM) {
        cout << "Tabela cheia\n" << endl;
    }
    else {
        vetor[pos] = chave;
    }
}

void busca(int chave) {
    int cont = 0;
    int pos;

    pos = espalha(chave);
    while (vetor[pos] != chave && vetor[pos] != -1 && cont != TAM) {
        pos = reespalha(pos);
        cont++;
    } 
    if (vetor[pos] == chave){
        cout << "Chave encontrada na posicao " << pos << endl;
    } else cout << "Chave nao encontrada" << endl;
}

int main() {
    inicia();

    insere(12);
    insere(44);
    insere(13);
    insere(82);
    insere(909);
    insere(19);
    imprime();

    busca(82);
    busca(122);
    busca(44);
    busca(19);
    busca(299);
}
