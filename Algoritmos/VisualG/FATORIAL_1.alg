Algoritmo "Fatorial"
// Disciplina   : [Linguagem e L�gica de Programa��o] 
// Professor   : Antonio Carlos Nicolodi 

Var
   N, i, fat: inteiro

Inicio
  leia(N)
  se N<0 ent�o
     escreva("N deve ser positivo")
  senao
        fat <- 1
        para i de 2 ate N faca
           fat <- fat*i
        fimpara
        escreva ("Fatorial", N, " �", fat)
  fimse
Fimalgoritmo