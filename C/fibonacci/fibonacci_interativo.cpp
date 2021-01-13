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
    int atual=1, ant1=1, ant2=1, i=2;
    while (i<n){
        atual = ant1+ant2;
        ant1=ant2;
        ant2=atual;
        i++;
    }
    return atual;
}