#include<stdio.h>
#include<stdlib.h>

int main() {
    float p, a, i;
    printf("informe seu peso, em quilograma, e sua altura, em metros");
    scanf("%f %f", &p, &a);
    i=p/(a*a);
            if (i<20)
                printf("o seu imc eh '%.2f', voce esta abaixo do peso\n", i);
            if (i>20 && i<25)
                printf("o seu imc eh '%.2f', voce esta no peso normal\n", i);
            if (i>25 && i<30)
            	printf("o seu imc eh '%.2f', voce esta sobrepeso\n", i);
            if (i>30 && i<40)
            	printf("o seu imc eh '%.2f', voce esta obeso\n", i);
            if (i>40)
            	printf("o seu imc eh '%.2f', voce esta com obesidade morbida\n", i);
    system("pause");
    return 0;
    
}
