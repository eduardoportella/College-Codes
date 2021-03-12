#include <stdlib.h>
#include <stdio.h>

int maior(int x, int y){
    if (x > y){
        return x;
    } if (x <y){
        return y;
    } if (x == y){;
        return x;
    }
}

int main() { 
    int a, b;
    printf("Digite o valor de A: \n");
    scanf("%d", &a);
    printf("Digite o valor de B: \n");
    scanf("%d", &b);
    printf("O maior numero eh: %d \n", maior(a, b));

    system("pause");
    return 0;
}


