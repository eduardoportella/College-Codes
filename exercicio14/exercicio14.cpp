#include <stdlib.h>
#include <stdio.h>

int main (){
    int n;
    float  mediaPares, mediaTot, numerosPares, numerosImpares, totalN, somaN, somaPares;
    numerosPares = 0;
    numerosImpares = 0;
    somaPares = 0;

    printf("digite um numero inteiro: ");
    scanf("%d", &n);
    totalN = 1;
    somaN = n;

    if (n%2==0) {
        numerosPares++;
        somaPares = n;
    } else {
        numerosImpares++;
    }
    while (n!=0){
        scanf("%d", &n);
        if (n%2==0 && n!=0){ //n deve ser inteiro
            numerosPares++;
            somaPares = somaPares + n;
            totalN++;
            somaN = somaN + n;
        }
        if (n%2!=0 && n!=0){ //n deve ser inteiro
            numerosImpares++;
            totalN++;
            somaN = somaN + n;
        }
    }
    mediaPares = somaPares/numerosPares;
    mediaTot = somaN/totalN;

    printf("foram digitados %i numeros pares \n", numerosPares);
    printf("foram digitados %i numeros impares \n", numerosImpares);
    printf("a media dos numeros pares eh %.2f \n", mediaPares);
    printf("a media de todos os numeros eh %.2f \n", mediaTot);

    system("pause");
    return 0;
}