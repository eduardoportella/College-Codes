#include <stdlib.h> //NAO TA PRONTO!!!
#include <stdio.h>
#include <time.h>

int main() {
    int i, A[100], Q[100];
    srand(time(NULL));
    for ( i = 0; i < 100; i++)
    {
        A[i]= rand() %100;
        Q[i] = 0;
    }
    for ( i = 0; i < 100; i++)
    {
        Q[A[i]]++; //Ele copia o a[i] e soma 1 la dentro
    }
    for ( i = 0; i < 100; i++)
    {
        if (Q[i]>0){
            printf("Valor %d repete %d vezes \n", i, Q[i]);
        }
    }
    return 0;
}