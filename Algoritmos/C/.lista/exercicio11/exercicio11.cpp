#include <stdio.h>
#include <stdlib.h>

int main () {
    float n2, qtdNumerosPares, qtdNumerosTotais, media;
    int n, d;
    n = 0;
    n2 = 0;
    d = 0; 
    qtdNumerosPares = 0;
    qtdNumerosTotais = 0;

    printf("Digite os numeros:\n");
    do {
        scanf("%i", &n);
        d = n;
        if (d % 2 == 0){
            d = d + n2;
            n2 = d;
            qtdNumerosPares = qtdNumerosPares + 1;
        }
        qtdNumerosTotais = qtdNumerosTotais + 1;
                
    } while (n != 0); 
    if (qtdNumerosTotais == qtdNumerosPares){
        media = n2/(qtdNumerosPares-1); //Ta contando o 0 
        printf("A media entre esses numeros eh: %.2f", media);
    }   else {
        printf("Foram digitados %.0f numeros \n", qtdNumerosTotais);
    }


    system("pause");
    return 0;
}