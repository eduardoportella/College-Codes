#include <stdio.h>
#include <stdlib.h>

int main () {
    float n;
    int intervalo0a25, intervalo26a50, intervalo51a75, intervalo76a100;

    intervalo0a25 = 0;
    intervalo26a50 = 0;
    intervalo51a75 = 0;
    intervalo76a100 = 0;

    while (n>=0){
        printf("Digite um numero: ");
        scanf("%f", &n);
        if (n>=0 && n<=25) {
            intervalo0a25++;
        } if (n>=26 && n <=50) {
            intervalo26a50++;
        } if (n>=51 && n<=75){
            intervalo51a75++;
        } if (n>=76 && n<=100){
            intervalo76a100++;
        }
    } 
    printf("foram digitados %d pertencentes ao intervalo [0,25]  \n", intervalo0a25);
    printf("foram digitados %d pertencentes ao intervalo [26,50] \n", intervalo26a50);
    printf("foram digitados %d pertencentes ao intervalo [51,75] \n", intervalo51a75);
    printf("foram digitados %d pertencentes ao intervalo [76,100] \n", intervalo76a100);
    
    system("pause");
    return 0;
}