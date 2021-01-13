#include <stdio.h>
#include <stdlib.h>

int qtde;

int x(int, int); //prototipo da funcao


int main() {
    int resp;
    resp = x(5,3);
    printf("resultado: %d \n", resp);
    printf("quantidade de chamadas: %d \n", qtde);

    system("pause");
    return 0;
}

int x(int n, int m){
    qtde++;
    if (n==m || m==0){
        return 1;
    } else {
            return x(n-1, m) + x(n-1, m-1);
    }
}
