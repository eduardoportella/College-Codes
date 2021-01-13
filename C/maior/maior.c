#include<stdio.h>
#include<stdlib.h>

int main()
{
    float n1, n2, n3;
    printf("informe 3 numeros");
    scanf("%f %f %f", &n1, &n2, &n3);
        if (n1>n2 && n1>n3)
            printf("%.2f eh maior\n", n1);
        else if (n2>n1 && n2>n3)
            printf("%.2f eh maior\n", n2);
        else
            printf("%.2f eh maior\n", n3);
        system("pause");
        return 0;
}
