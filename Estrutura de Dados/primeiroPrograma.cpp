#include <iostream>  //#include <stdio.h>

using namespace std; //incluso no c++

const int TAM = 5; // #define TAM 5
int vetor[TAM];

int main() {
    int i, maior, menor;
    cout << "Digite " << TAM << " valores: "; //printf("Digite %d valores", TAM);
    for ( i = 0; i < TAM; i++)
    {
        cin >> vetor[i]; //scanf("%d", &vetor[i]);
    }

    for ( i = 0; i < TAM; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;

    for ( i = TAM; i < i; i--)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;

    maior = vetor[0];
    menor = vetor[0];
    for ( i = 0; i < TAM; i++)
    {
        if (vetor[i]>maior){ 
            maior = vetor[i];
        } if (vetor[i] < menor){
            menor = vetor[i];
        }
    }
    cout << "O maior valor e: " << maior << endl; //printf("O maior valor e: %d", maior);
    cout << "O menor valor e: " << menor <<endl;

    int soma = vetor[0];
    for (int i = 1; i<TAM; i++){
        soma = soma + vetor[i];
    }
    cout << "A soma e: " << soma <<endl;
    int media = soma/TAM;

    cout << "A media e: " <<  media << endl;
}