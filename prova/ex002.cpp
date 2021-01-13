#include <stdio.h>
#include <stdlib.h>

int multiplicacao(int valor1, int valor2);

int main() {
    int n1, n2;
    printf("MULTIPLICACAO \n \n");
    printf("Digite o valor 1 \n");
    scanf("%d", &n1);
    printf("Digite o valor 2 \n");
    scanf("%d", &n2);
    printf("%d", multiplicacao(n1, n2));
    printf("\n");
    system("pause");
    return 0;
}

int multiplicacao(int valor1, int valor2){
    int i, aux, resultado;
    resultado = 0;
    if (valor2>0 && valor1 != 0){
        for (i=0; i<valor2; i++){
            resultado = resultado + valor1;
        }
    } if (valor2<0 && valor1>0){
        aux = valor1;
        valor1 = valor2;
        valor2 = aux;
        for (i=0; i<valor2; i++){
            resultado = resultado + valor1;
        } }
    if (valor2<0 && valor1<0){
        valor2 = valor2*-1;
        for (i=0; i<valor2; i++){
            resultado = resultado + valor1;
        } resultado = resultado *-1;
        } 
    if (valor1 == 0 || valor2 == 0){
        resultado = 0;
    }
    printf("resultado: ");
    return resultado;
}