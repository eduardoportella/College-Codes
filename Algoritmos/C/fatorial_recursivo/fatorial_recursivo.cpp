#include <stdio.h>
#include <stdlib.h>

int fat(int); //prototipo da funcao

int main() {
    int num;
    printf("Informe num: \n");
    scanf("%d", &num);
    printf("fatorial de %d = %d \n", num, fat(num));
    return 0;
}

int fat(int n){
    if (n<0){
        return -1;
    }
    if (n==0) {
        return 1;
    } else {
        return (n*fat(n-1));
    }
}