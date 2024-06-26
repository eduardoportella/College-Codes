#include <iostream>
#include <cstdlib> //stdlib.h
#include <ctime> //time.h

using namespace std;

const int TAM = 200;

int vetor[TAM];
int tamheap;
int scratch[TAM];

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
        do {
        j--;
        } while (vetor[j] > piv);
        do {
            i++;
        } while (vetor[i] < piv);
        if (i<j){
            temp = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = temp;
        } else{
            return j;
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
        for (i = 0; i <=TAM-pass-1; i++)
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
        }
            temp = vetor[i];
            vetor[i] = vetor[corrente];
            vetor[corrente] = temp;
    }
}

void mergeSort(int lo, int hi){
    int media, L, H;
    if (lo<hi){
        media = (lo+hi)/2;
        mergeSort(lo, media);
        mergeSort(media+1, hi);
        L = lo;
        H = media+1;
        for (int k=lo; k<=hi; k++){
            if (L <= media && (H>hi || vetor[L] < vetor[H])){
                scratch[k] = vetor[L];
                L++;
            } else {
                scratch[k] = vetor[H];
                H++;
            }
        } for (int k=lo; k<=hi; k++){
            vetor[k] = scratch[k];
        }
    }
}

void heapify(int i){
    int l, r, maximo, temp;

    l = 2*i + 1;
    r = 2*i + 2;
    if (l< tamheap && vetor[l] > vetor[i]){
        maximo = l;
    } else {
        maximo = i;
    } if (r < tamheap && vetor[r] > vetor[maximo]){
        maximo = r;
    } if (maximo != i){
        temp = vetor[i];
        vetor[i] = vetor[maximo];
        vetor[maximo] = temp;
        heapify(maximo);
    }
}

void buildHeap(){
    tamheap = TAM;
    for (int j = (TAM/2)-1; j>=0; j--)
    {
        heapify(j);
    }
    
}

void heapSort(){
    int k, temp;
    buildHeap();
    for ( k = TAM-1; k>=1; k--)
    {
        temp = vetor[0];
        vetor[0] = vetor[k];
        vetor[k] = temp;
        tamheap--;
        heapify(0);
    }
}

void insertionSort(){
    int x, i, temp;
    bool achou;
    for (int k=1; k<=TAM-1; k++){
        x = vetor[k];
        i = k-1;
        achou = false;
        while (!achou && i>=0){
            if (vetor[i] > x){
                //falta trocar
                temp = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = temp;
                i--;
            } else {
                achou = true;
            }
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
    printf("VETOR DESORDENADO: \n");
    imprime();

    tempo1 = clock();
    bubbleSort(); //FUNCIONANDO
    printf("bubbleSort: \n");
    imprime();
    tempo2 = clock() - tempo1;
    cout << "Tempo: " << (float) tempo2/CLOCKS_PER_SEC << " s" << endl;

    gera();
    tempo1 = clock();
    quickSort(0, TAM-1); //FUNCIONANDO
    tempo2 = clock() - tempo1;
    printf("quickSort: \n");
    imprime();
    cout << "Tempo: " << (float) tempo2/CLOCKS_PER_SEC << " s" << endl;

    // gera();
    // tempo1 = clock();
    // selecao(); //FUNCIONANDO
    // tempo2 = clock() - tempo1;
    // printf("Selecao: \n");
    // imprime();
    // cout << "Tempo: " << (float) tempo2/CLOCKS_PER_SEC << " s" << endl;

    // gera();
    // tempo1 = clock();
    // mergeSort(0, TAM-1); //FUNCIONANDO
    // tempo2 = clock() - tempo1;
    // printf("mergeSort: \n");
    // imprime();
    // cout << "Tempo: " << (float) tempo2/CLOCKS_PER_SEC << " s" << endl;

    // gera();
    // tempo1 = clock();
    // heapSort(); //FUNCIONANDO
    // tempo2 = clock() - tempo1;
    // printf("heapSort: \n");
    // imprime();
    // cout << "Tempo: " << (float) tempo2/CLOCKS_PER_SEC << " s" << endl;

    // gera();
    // tempo1 = clock();
    // insertionSort(); //FUNCIONANDO
    // tempo2 = clock() - tempo1;
    // printf("InsertionSort: \n");
    // imprime();
    // cout << "Tempo: " << (float) tempo2/CLOCKS_PER_SEC << " s" << endl;


    system("pause");
    return 0;
}