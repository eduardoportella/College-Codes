#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void md(float x, float y, float z, float *med, float *desv){
    *med = (x+y+z)/3;
    *desv = (pow(x - *med, 2) + pow(y - *med, 2) + pow(z - *med, 2));
    *desv = sqrt(*desv);
}

int main() {
    float a, b, c, *media, *desvio;
    printf("Informe A: \n");
    scanf("%f", &a);
    printf("Informe B: \n");
    scanf("%f", &b);
    printf("Informe C: \n");
    scanf("%f", &c);
    md(a, b, c, &media, &desvio);
    printf("media: %.2f \ndesvio: %.2f", &media, &desvio);

    //INCOMPLETO
    system("pause");
    return 0;
}