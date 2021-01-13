#include <stdlib.h>
#include <stdio.h>

int divisao(int dividendo, int divisor);

int main(){
    int n1, n2;
    printf("DIVISAO \n \n");
    printf("digite o dividendo: ");
    scanf("%d", &n1);
    printf("\ndigite o divisor: ");
    scanf("%d", &n2);
    printf("\nresultado: ");
    printf("%d \n", divisao(n1, n2));
    system("pause");
    return 0;
}

int divisao(int dividendo, int divisor){
    int aux, resultado, erro = 0;
    float i;
    resultado = 0;
    if (dividendo>0 && divisor>0) 
    {
        for (i = dividendo; i > 0; i = i-divisor){
            resultado++;
        }
        
    } if (dividendo>0 && divisor<0){ 
        divisor = divisor * -1;
        for (i = dividendo; i > 0; i = i-divisor){
            resultado++;
        }
        resultado = resultado * -1;
    } if (dividendo<0 && divisor>0){ 
        dividendo = dividendo * -1;
        for (i = dividendo; i > 0; i = i-divisor){
            resultado++;
        }
        resultado = resultado * -1;
    } if (dividendo<0 && divisor <0){ 
        divisor = divisor * -1;
        dividendo = dividendo * -1;
        for (i = dividendo; i > 0; i = i-divisor){
            resultado++;
        }
    } if (dividendo == 0){ 
        resultado = 0;
    } if (divisor == 0){
        erro = 1;
    }
    if (erro == 0)
    {
        return resultado;
    } else
    {
        printf("ERRO \n");
        return -1;
    }
    
}