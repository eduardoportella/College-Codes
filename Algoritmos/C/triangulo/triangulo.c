#include <stdio.h>
#include <stdlib.h>
int main() {
    float A, B, C;
        printf("informe os valores");
            scanf("%f %f %f", &A, &B, &C);
            if (A<B+C && B<A+C && C<B+A)
                printf("as medidas '%.2f %.2f %.2f' formam um triangulo", A, B, C);

        if (A==B && B==C)
            printf(" equilatero\n");
        else if (A==B || A==C || B==C)
            printf(" isosceles\n");
        else
            printf(" escaleno\n");


    system("pause");
    return 0;
}
