#include <stdio.h>
#include <stdlib.h>
#define n 3

//erro codigo procurar aula 04/12

typedef struct
{
    int codigo;
    char descr[50]; //limite de caracteres
    float qtde, vlr;
}   tmat;

void ordena(tmat [], int);

void mostra(tmat [], int);

int main(){
    int i;
    tmat vmat[n];
    for ( i = 0; i < n; i++)
    {
        printf("Cod: ");
        scanf("%d", &vmat[i].codigo);
        printf("Desc: ");
        fflush(stdin);
        gets(vmat[i].descr);
        printf("Qtde: ");
        scanf("%f", &vmat[i].qtde);
        printf("Valor: ");
        scanf("%f", &vmat[i].vlr);    
    }

    ordena(vmat, n);
    mostra(vmat, n);

    system("pause");
    return 0;
}


void ordena(tmat v[], int tam){
    int, i, j;
    tmat aux;
    for ( i = 0; i < tam-1; i++)
    {
        for ( j = i+1; j < tam; j++)
        {
            if (strcmpi(v[i].descr, v[j].descr)>0)
            {
                    aux=v[i];
                    v[i] = v[j];
                    v[j] = aux;
            }
        }
    }
}

void mostra (tmat v[], int tam) {
    int i;
    printf("Cod     Descr     Qtde      Valor \n");
    for ( i = 0; i < tam; i++)
    {
        printf("%5d     %15s    %5.2f   %5.2f \n",
        v[i].codigo, v[i].descr,
        v[i].qtde, v[i].vlr);
    }
}