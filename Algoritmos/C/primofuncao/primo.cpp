#include <stdio.h> //NAO FUNCIONA!!!!!!!!!!!!!!
#include <stdlib.h>

int Primo (int x) {
    int divisor, primoRetorno;
    divisor = x;
    primoRetorno = 1;
    while (divisor > 2);
    {
        divisor = divisor - 1;
        if (x % divisor == 0) {
            primoRetorno = 0;
        }  
    }
    if (primoRetorno == 1){
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n, resultado;
    printf("Digite um numero: ");
    scanf("%d", &n);
    resultado = Primo(n);
    printf("%d", Primo(n));
    //printf("o resultado eh: %d \n", Primo(n));
    //printf("[0] nao eh primo \n");
    //printf("[1] eh primo \n");

    system("pause");
    return 0;
}