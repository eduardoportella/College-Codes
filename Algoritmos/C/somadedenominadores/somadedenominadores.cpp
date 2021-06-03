#include <stdlib.h>
#include <stdio.h>

float soma(int n){
    if (n==1) {
        return 1;
    } else {
        return 1.0/n + soma(n-1);
    }
}

int main() {
    int a;
    printf("digite o enesimo termo da equacao 1/1+ 1/2 + ... + 1/n \n");
    scanf("%d", &a);
    printf("resultado %f \n", soma(a));

    system("pause");
    return 0;
}