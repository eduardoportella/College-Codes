#include <stdlib.h>
#include <stdio.h>

int main() {
    int numerosDigitados;
    float n1, n2, maiorNumero, menorNumero;
    numerosDigitados = 1;

    
    printf("Digite os 50 numeros:\n");
    scanf("%f", &n1);
    maiorNumero = n1;
    menorNumero = n1;
    while (numerosDigitados<50){
        scanf("%f", &n1);
        numerosDigitados++;
        if (n1 > maiorNumero){ 
             maiorNumero = n1;
        } if (n1 < menorNumero){
            menorNumero = n1;
        }
    }
    printf("O maior numero digitado foi %.2f, e o menor numero foi %.2f \n", maiorNumero, menorNumero);

    system("pause");
    return 0;
}