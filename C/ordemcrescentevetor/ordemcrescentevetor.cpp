#include <stdio.h>
#include <stdlib.h>
#define n 8 //vetor 8

float ordemCrescente(float[]);

int main() {
    float vetor[n];
    int i;
    for(i = 1; i<=n; i++){
        printf("digite o valor do vetor %d: ", i);
        scanf("%f", &vetor[i]);
    }
    printf("%f", vetor[i]);
    return 0;
}

