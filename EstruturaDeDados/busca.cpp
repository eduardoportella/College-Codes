#include <iostream>
using namespace std;

const int TAM = 10;

int vetor[TAM+1] = {25, 5, 23, 10, 9, 7, 4, 18, 12, 34, 56};

void sequencial(int chave){
    int i=0;

    while (i<TAM && vetor[i] != chave){
        i++;
    }
    if (i!=TAM){
        cout << "Encontrei na posicao " << i << endl;
    } else {
        cout << "Nao encontrei!" << endl;
    }
}

void sequencialSentinela(int chave){
    int i=0;

    vetor[TAM] = chave;
    while (vetor[i] != chave){
        i++;
    }
    if (i!=TAM){
        cout << "Encontrei na posicao " << i << endl;
    } else {
        cout << "Nao encontrei!" << endl;
    }
}

void sequencialMovelParaFrente(int chave){
    int i=0, j;

    while (i<TAM && vetor[i] != chave){
        i++;
    }
    if (i != TAM){
        cout << "Encontrei e movi pra frente" << endl;
        for (j = 0; j < 0; j--){
            vetor[j] = vetor[j-1];
        }
        vetor[0] = chave;
    }
    else {
        cout << "Nao encontrei!" << endl;
    }
}

void sequencialTransposicao(int chave){
    int i=0;
    while (i<TAM && vetor[i] != chave){
        i++;
    }
    if (i != TAM){
        cout << "Encontrei e movi para tras" << endl;;
        if (vetor[0] != chave){
            vetor[i] = vetor[i-1];
            vetor[i-1] = chave;
        }
    }
    else {
        cout << "Nao encontrei!" << endl;
    }
}

void imprime(){
    int i;

    for (i = 0; i < TAM; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

int main(){
    int num = 7;
    sequencial(num);
    sequencialSentinela(num);
    sequencialMovelParaFrente(num);
    sequencialTransposicao(num);

    system("pause");
    return 0;
}