#include <stdio.h>
#include <stdlib.h>

int main () {
    int valor, c100, c50, c10, c5, c1;
    c100 = 0;
    c50 = 0;
    c10 = 0;
    c5 = 0;
    c1 = 0;

    printf("digite um numero:");
    scanf("%i", &valor);

    while (valor > 0) {
        if (valor >= 100) {
            valor = valor - 100;
            c100++;
        } else {
            if (valor >= 50) {
                valor = valor - 50;
                c50++;
            } else {
                if (valor >= 10) {
                    valor = valor - 10;
                    c10++;
                } else {
                    if (valor >= 5) {
                        valor = valor - 5;
                        c5++;
                    } else {
                        if (valor >= 1) {
                            valor--;
                            c1++;
                        }
                    }
                }
            }
        }
    }
        
    printf("cedulas de 100: %i \n", c100);
    printf("cedulas de 50: %i \n", c50);
    printf("cedulas de 10: %i \n", c10);
    printf("cedulas de 5: %i \n", c5);
    printf("cedulas de 1: %i \n", c1);

    system("pause");
    return 0;
}