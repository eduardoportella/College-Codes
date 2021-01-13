#include <stdio.h>
#include <stdlib.h>

void MostraLinhas() { //procedimento em c, sem retorno
    printf("----------------- \n");
    printf("----------------- \n");
    printf("----------------- \n");
}

int fat(int N) { //função em c, com retorno
    int i, R;
    if (N<0) return -1;
    i = 2;
    R = 1;
    while (i<=N)
    {
        R = R * i;
        i = i + 1;
    }
    return R;
}

int main () {
    int Num, Result;
    MostraLinhas();
    printf("Informe Num: \n");
    Result = fat(Num);
    scanf("%d", &Num);
    printf("Fatorial: %d \n", fat(Num));
    MostraLinhas();
    
    system("pause");
    return 0;
}
