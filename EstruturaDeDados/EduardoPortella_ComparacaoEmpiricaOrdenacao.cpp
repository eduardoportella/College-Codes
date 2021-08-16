#include <iostream>
#include <cstdlib> //stdlib.h
#include <ctime> //time.h

using namespace std;

const int TAM = 10;

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

int PARTITION(int p, int r){
    int piv = vetor[p];
    int i = p-1, j = r+1, temp;
    while (true){
        j--;
        while (vetor[j] > piv){
            i++;
        } while (vetor[i] < piv){
            if (i<j){
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            } else {
                return j;
            }
        }
    }
}

void quickSort(int p, int r){
    int q;
    if (p<r){
        q = PARTITION(p, r);
        quickSort(p, q);
        quickSort(q+1, r);
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

void selecao(){
    int i, corrente, k, temp;
    for (i=0; i<=TAM-2; i++){
        corrente = i;
        for (k=i+1; k<=TAM-1; k++){
            if (vetor[corrente] > vetor[k]){
                corrente = k;
            }
            temp = vetor[i];
            vetor[i] = vetor[corrente];
            vetor[corrente] = temp;
        }
    }
}

void mergeSort(int lo, int hi){
    int media, L, H, scratch[TAM];
    if (lo<hi){
        media = (lo+hi)/2;
        mergeSort(lo, media);
        mergeSort(media+1, hi);
        L = lo;
        H = media+1;
        for (int k=lo; k<hi; k++){
            if (L <= media && (H>hi || vetor[L] < vetor[H])){
                scratch[k] = vetor[L];
                L++;
            } else {
                scratch[k] = vetor[H];
                H++;
            }
        } for (int k=lo; k<hi; k++){
            vetor[k] = scratch[k];
        }
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
    imprime();
    tempo1 = clock();
    // bubbleSort(); //FUNCIONANDO
    quickSort(0, TAM-1);
    // selecao(); // FUNCIONANDO
    // mergeSort(0, TAM-1); //FUNCIONANDO
    tempo2 = clock() - tempo1;
    cout << "Tempo: " << (float) tempo2/CLOCKS_PER_SEC << " s" << endl;
    imprime();

    system("pause");
    return 0;
}