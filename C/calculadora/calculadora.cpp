#include <stdio.h>
#include <stdlib.h>

int main() {
    float val1, val2, r;
    char oper, op;

    do {
        printf("Informe equacao: ");
        scanf("%f %c %f", &val1, &oper, &val2);
        switch (oper )
        {
        case '+': r=val1+val2;
            printf("Soma: %.2f \n", r);
            break;
        case '-': r = val1-val2;
            printf("Diferenca: %.2f \n", r);
            break;
        case '*': 
        case 'x': r = val1*val2;
            printf("Produto:  %.2f \n", r);
            break;
        case '/': 
                if (val2 != 0){
                    r = val1/val2;
                    printf("Divisao: %.2f \n", r);    
                } else {
                        printf("Divisao por 0 \n");
                }
            break;
        case '%': r=(int)val1 % (int)val2;
            printf("Resto: %.2f \n", r);
            break;

        default: printf("Operador desconhecido \n");
            break;
        }
        printf("Deseja continuar? [s/n] ");
        fflush(stdin); //LIMPAR TECLADO
        scanf("%c", & op);

    } while (op != 'n');
    
    system("pause");
    return 0;
}