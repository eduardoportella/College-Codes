#include <stdio.h> //codigo quebrado
#include <stdlib.h>
#define N 4

void trocar (int[], int);

int main(){
    int v[N], i;
    for (i=0; i<N; i++){
        printf("Digite o elemento %d: \n", i+1);
        scanf("%d", &v[i]);
    }

    trocar(v, N);

    for (i=0; i<N; i++){
        printf("%d ", v[i]);
    }

    system("pause");
    return 0;
    
}

void trocar (int x[], int Tam){
    int metade = Tam/2;
    int j, aux, aux2;
    for (j=0; j<metade; j++){
        aux = x[j];
        x[j] = x[Tam-j];
        x[Tam-j] = aux;
    }
}
