#include <stdlib.h>
#include <stdio.h>

int main(){
    char tab[4][4];
    int i, j, N=4;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            tab[i][j] = 'oia';
        }
        
    }
    printf(" ----  Tabuleiro do Jogo  -----\n\n");
	for(i=0; i<N; i++) {
	  for(j=0; j<N; j++) 
	      printf ("%c  ", tab[i][j]);
	  printf("\n");
    }
    
}