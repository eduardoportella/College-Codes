#include <stdio.h>
#include <stdlib.h>

int main () {
    float chico, ze, anos;
    chico = 1.50;
    ze = 1.10;
    anos = 0;

    while (chico > ze)
    {
        chico = chico + 0.02;
        ze = ze + 0.03;
        anos = anos + 1;
    }

    printf("o total de anos para ze ser maior que chico sao %2.f ", anos);

    system("pause");
    return 0;
}