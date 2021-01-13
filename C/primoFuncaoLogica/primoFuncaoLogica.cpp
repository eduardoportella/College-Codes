#include <stdio.h>
#include <stdlib.h>


bool primo (int x){
    int divisor, primoRetorno;
    divisor = x;
    primoRetorno = 1;
    while (divisor>2){
        divisor--;
        if (x % divisor==0){
            primoRetorno = 0;
        }
    }
    if (primoRetorno == 1) {
        return true;
    } else {
        return false;
    }
}

int main () {
    int n;
    printf("Digite um numero: \n");
    scanf("%d", &n);
    if (primo(n) == true){
        printf("%d eh primo \n", n);
    } else {
        printf("%d nao eh primo \n", n);
    }

    system("pause");
    return 0;
}