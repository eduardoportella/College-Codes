#include <iostream>
#include <algorithm>

using namespace std;

const int TAM = 9;
const int TAM_AUX = 10;

int vetor[TAM] = {5, 0, 9, 1, 2, 1, 0, 4, 5};
int auxiliar[TAM_AUX];

void imprime(int vet[], int tamanho){
    int i;
    for ( i = 0; i < tamanho; i++)
    {
        cout << vet[i] << " ";
    }
    cout << endl;
}

int main(){
    int i;

    fill_n(auxiliar, TAM_AUX, 0); //preenche com 0, TAM_AUX elementos do vetor auxiliar

    for ( i = 0; i < TAM; i++)
    {
        auxiliar[vetor[i]]++;
    }
    imprime(vetor, TAM);
    imprime(auxiliar, TAM_AUX);

    i=0;
    while (i<TAM_AUX){
        while (auxiliar[i] != 0){
            cout << i << " ";
            auxiliar[i]--;
        }
        i++;
    }

    cout << endl;
    system("pause");
    return 0;
}