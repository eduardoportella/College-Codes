#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 4
int jogo[n][n];
char cartas[n][n];
char testando[n][n];
int cont=0;

void mostra(int z[n][n]){
    int i, j;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%5d ", z[i][j]);
        }
        printf("\n");
    }
}



void verifica(int z[n][n]){
    int i, j, k, l, vetorAux[10], contador=0;
    bool repetir;
    vetorAux[10];
    // while (repetir == true)
    // {

    
        while (contador < 9)
        {
            vetorAux[contador] = 0;
            contador++;
        }
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < n; j++)
            {
                if (vetorAux[z[i][j]] == 2){ //TENTAR FAZER COM WHILE VARIAVEL < 2.
                    //se ja foi posto esse numero 2 vezes
                    z[i][j] = 15;
                } else {
                    vetorAux[z[i][j]]++;
                } 
            }
        }
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < n; j++)
            {
                if (z[i][j] == 15)
                {
                    for ( k = 0; k < 10; k++)
                    {
                        if (vetorAux[k] == 1)
                        {
                            z[i][j] = vetorAux[k];
                            vetorAux[k]++;
                        }
                        
                    }
                    
                }
                
                
            }
            
        }
        
    // }
}



void mostraChar(char z[n][n]){
    int i, j;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%5d ", z[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int i, j;
    srand(time(NULL));
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            jogo[i][j] = rand() % 10;
        }
    }
    mostra(jogo);
    printf("\n");
    verifica(jogo);
    mostra(jogo);
    printf("\n");
    mostraChar(testando);
    system("pause");
    return 0;
}