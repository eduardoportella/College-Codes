Algoritmo "semnome"
Var
   v: vetor[1..5] de inteiro
   i: inteiro
   
funcao maior(n: inteiro): inteiro
var
   i, ma: inteiro
inicio
   ma <- v[1]
   para i de 2 ate n faca
      se (v[i] > ma) entao
         ma <- v[i]
      fimse
   fimpara
   retorne ma
fimfuncao

Inicio
   para i de 1 ate 5 passo 1 faca
      leia(v[i])
   fimpara
   
   escreva("maior : ", maior(5))
Fimalgoritmo