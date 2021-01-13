#include <stdlib.h>
#include <stdio.h>

int main(){
    float mediaP, n, somaP, quantidadeN, quantidadeP;
    somaP = 0;
    quantidadeN = 0;
    quantidadeP = 0;
    printf("MEDIA DOS POSITIVOS E QUANTIDADE DE NEGATIVOS \n \n");
    while (n != 0){
        printf("digite um valor [0 para sair]: \n");
        scanf("%f", &n);
        if (n>0){
            somaP = n + somaP;
            quantidadeP++;
        } if (n<0){
            quantidadeN++;
        }
    }
    if (quantidadeP>0){
        mediaP = somaP/quantidadeP;
    } else {
        mediaP = 0;
    }
    printf("Foram digitados %.0f numeros negativos, e a media dos numeros positivos eh: %.2f \n", quantidadeN, mediaP);

    system("pause");
    return 0;
}



