#include <stdio.h>
#include <stdlib.h>

int main() {
    float soma, n;
    soma = 0;

    printf("digite o enesimo termo da equacao 1/1 + 1/2 + ... + 1/n \n");
    scanf("%f", &n);
    soma = soma + 1/n;
    while (n > 1) {
        printf(" 1/%.0f +", n);
        n--;
        soma = soma + 1/n;
    }
    printf(" 1/1 \n"); //printf complementar pois o while n>1
    printf("o resultado eh %.3f \n", soma);

    system("pause");
    return 0;
}