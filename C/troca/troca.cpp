#include <stdio.h>
#include <stdlib.h>

//prototipo de funcao
void troca(int *, int *);

int main() {
    int a, b;
    printf("Informe A: \n");
    scanf("%d", &a);
    printf("Informe B: \n");
    scanf("%d", &b);
    troca(&a, &b);
    printf("A: %d \nB: %d \n", a, b);

    system("pause");
    return 0;
}

void troca(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}