#include <stdio.h>
#include <stdlib.h>

int main () {
    float a1, r, n, an;
    printf("informe o primeiro termo, a razao e termo que deseja");
    scanf("%f %f %f", &a1, &r, &n);
    an=a1+(n-1)*r ;
    printf("o resultado eh: %2.f\n", an);
    system ("pause");
    return 0;
}



