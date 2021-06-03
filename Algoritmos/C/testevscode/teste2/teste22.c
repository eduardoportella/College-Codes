#include <stdio.h>
#include <stdlib.h>

int main()  {
        int num;
        printf("informe um inteiro positivo: ");
        scanf("%d", &num);
        if (num%2==0)
            printf("%d eh par\n", num);
        else
            printf("%d eh impar\n", num);
        system("pause");
        return 0;
}
