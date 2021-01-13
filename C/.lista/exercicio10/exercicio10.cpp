#include <stdio.h>
#include <stdlib.h>

int main () {
    float n, n2, qtdNumero, d, media; //Todos em float, pois a media inteirava quando somente ela estava em float

    n = 0;
    n2 = 0;
    qtdNumero = 0;
    d = 0;

    printf("Digite os numeros a serem calculados. Quando um numero negativo for digitado, a media sera calculada \n");
    while (n>=0) {
        scanf("%f", &d);
        n = d;
        if (n<0) { //if pois o programa le (scanf) dps do while
            break;
        }
        else {
        d = d + n2;
        n2 = d;
        qtdNumero = qtdNumero + 1;   
        }
    }
    media = n2/qtdNumero;
    printf("A media dos numeros eh %.2f \n", media);


    system("pause");
    return 0;
}