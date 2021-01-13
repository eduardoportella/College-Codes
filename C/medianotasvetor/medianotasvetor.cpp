#include <stdio.h>
#include <stdlib.h>
#define n 8 //exemplo de constante em c

//prototipo da funcao
float maior(float [], int);
float soma(float [], int);

int main() {
    float nota[n], media;
    int i;
    //leitura do vetor
    for(i = 0; i<n; i++) {
        printf("nota aluno %d: ", i);
        scanf("%f", &nota[i]);
        media = media + nota[i];
    }
    media = media/8;
    //mostrar o vetor
    for (i=0; i<n; i++)
        printf("Nota: %d = %.2f \n", i, nota[i]);
    printf("Media das notas: %.2f \n", media);
    printf("maior nota: %.2f \n", maior(nota, n));
    printf("a soma das notas eh: %.2f \n", soma(nota, n));
    return 0;
}

float maior(float x[], int tam){
    int i;
    float ma;
    ma = x[0];
    for (i=1; i<tam; i++)
        if(x[i]>ma) ma = x[i];
    return ma;
}

float soma(float y[], int tam){
    int h;
    float soma;
    soma = 0;
    for (h=0; h<tam; h++){
        soma = soma + y[h];
    }
    return soma;
}