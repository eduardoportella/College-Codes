/*Considere um vetor de trajetórias de 9 elementos, onde cada elemento possui o valor do próximo elemento do vetor a ser lido. 
                     Índice       0    1    2    3    4    5    6      7     8  
            	      Valor       4    6    5    8    1    7    3     -1     2

Assim, a seqüência da leitura seria 0, 4, 1, 6, 3, 8, 2, 5, 7, -1
Faça um algoritmo que seja capaz de ler esse vetor e seguir a trajetória.
Considere o caso acima como um simples exemplo, faça o programa de forma genérica.
*/

#include <stdlib.h>
#include <stdio.h>
#define n 9

int main() {
    int i, vetor[n], aux;
    printf("Lembre-se de digitar um valor negativo! \n");
    for ( i = 0; i < n; i++)
    {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    i = 0;
    do {
        if (i==0){
            printf("0 "); //comecar no 0
        } printf ("%d ", vetor[i]);
        i = vetor[i];
    } while (i >=0);
    printf("\n");
    system("pause");
    return 0;
}