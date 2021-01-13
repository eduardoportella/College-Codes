//Fazer um programa em C que leia um vetor com 10 elementos e informe a média dos valores informados e a quantidade de valores que estão abaixo da média calculada.

#include <stdio.h>
#include <stdlib.h>
#define n 10

int main() {
    int i, vetor[10], soma=0, qtdMedia=0;
    float media;
    for ( i = 0; i < 10; i++)
    {
        printf("\ndigite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
        soma = vetor[i] + soma;
    }
    media = soma/n;
    printf("\nos valores passados foram: \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d, ", vetor[i]);
        if (vetor[i]<media){
            qtdMedia++;
        }
    }
    printf("o valor da media dos valores eh %.2f e ha %d numeros abaixo da media \n\n", media, qtdMedia);
    system("pause");
    return 0;
}