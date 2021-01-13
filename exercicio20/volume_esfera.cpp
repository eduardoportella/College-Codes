#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float volume(int raio){
    float pi;
    pi = atan(1)*4; //valor de pi em c
    return (pow(raio, 3)*4/3*pi);
}
int main() {
    int n;
    float pi2;
    printf("digite o raio da esfera: \n");
    scanf("%d", &n);
    printf("o volume da esfera eh %.4f u.c. \n", volume(n));

    system("pause");
    return 0;
}