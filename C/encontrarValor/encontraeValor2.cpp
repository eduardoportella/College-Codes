#include <stdio.h> //break nao funciona
#include <stdlib.h>
#define n 10

int encontrarValor(int x[], int y, int Tam);

int main(){
    int i, v[n], valor;
    for (i=0; i<n; i++)
    {
        printf("Digite o numero %d \n", i+1);
        scanf("%d", &v[i]);
    }
    printf("Digite o valor a ser encontrado \n");
    scanf("%d", &valor);
    printf("\n %d \n", encontrarValor(v, valor, n));

    system("pause");
    return 0;
}

int encontrarValor(int x[], int y, int Tam){
    int i, posicao, retorno;
    for ( i = 0; i < Tam; i++)
    {
        if (x[i] == y){
            return 1;
            break;
        } else {
            return -1;
        }
    }
}