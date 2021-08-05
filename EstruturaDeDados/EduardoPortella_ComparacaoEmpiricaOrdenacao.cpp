#include <iostream>
#include <cstdlib> //stdlib.h
#include <ctime> //time.h

using namespace std;

const int TAM = 40000;

int vetor[TAM];

clock_t tempo1;
clock_t tempo2;

void gera(){
    int i;
    srand(10);
    for ( i = 0; i < TAM; i++)
    {
        vetor[i] = rand();
    }
}

void bubbleSort(){
    int pass, sorted, i, temp;
    pass = 1;
    sorted=0;
    while (!sorted && pass < TAM){
        sorted = 1;
        for (i = 0; i < TAM-pass-1; i++)
        {
            if (vetor[i] > vetor[i+1]){
                temp = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1]=temp;
                sorted = 0;
            }
        }
        pass = pass + 1;
    }
}

void imprime(){
    int i;
    for ( i = 0; i < TAM; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

int main(){
    gera();
    // imprime();
    tempo1 = clock();
    bubbleSort();
    tempo2 = clock() - tempo1;
    cout << "Tempo: " << (float) tempo2/CLOCKS_PER_SEC << " s" << endl;
    // imprime();
}