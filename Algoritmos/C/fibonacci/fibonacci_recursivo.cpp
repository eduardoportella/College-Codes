#include <stdlib.h>
#include <stdio.h>

int fibo(int);

int main() {
    int termo;
    printf("informe termo: \n");
    scanf("%d", &termo);
    printf("o termo %d de fibonacci eh %d \n", termo, fibo(termo));

    return 0;
}

int fibo(int n){
    if (n==1 || n == 2) return 1;
    return fibo(n-1) + fibo(n-2);
}