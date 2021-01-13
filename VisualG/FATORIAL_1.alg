Algoritmo "Fatorial"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var
   N, i, fat: inteiro

Inicio
  leia(N)
  se N<0 então
     escreva("N deve ser positivo")
  senao
        fat <- 1
        para i de 2 ate N faca
           fat <- fat*i
        fimpara
        escreva ("Fatorial", N, " é", fat)
  fimse
Fimalgoritmo