#include <stdlib.h> //VERIFICAR SE O NUMERO EH PERFEITO
#include <stdio.h>

bool perfeito(int x){
    int divisor, somaDivisores;
    divisor = x;
    while (divisor > 1){
        divisor--;
        if (x % divisor == 0){
            somaDivisores = somaDivisores + divisor;
        }
    }
    if (somaDivisores == x){
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    printf("digite um numero: \n");
    scanf("%d", &n);
    if (perfeito(n) == true) {
        printf("%d eh perfeito \n", n);
    } else {
        printf("%d nao eh perfeito \n", n);
    }

    system("pause");
    return 0;
}