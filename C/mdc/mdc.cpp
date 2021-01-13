#include <stdlib.h>
#include <stdio.h>

int mdc(int num1, int num2) {
    int resto;

    do {
        resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    } while (resto != 0);
    return num1;
}               

int main() {
    int resultado, n1, n2;
    printf("digite dois numeros, separados por espaco:\n");
    scanf("%d %d", &n1, &n2);
    resultado = mdc(n1,n2);
    printf("%d \n", resultado);

    system("pause");
    return 0;
}