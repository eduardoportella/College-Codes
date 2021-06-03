Algoritmo "Fatorial"

Var
   N, i, fat: inteiro

Inicio
  leia(N)
  se N<0 então
     escreva("N deve ser positivo")
  senao
        i <- 2
        fat <- 1
        repita
           se N<2 então
              interrompa
           fimse
           fat <- fat*i
           i<-i+1
        até (i>N)
        escreva ("Fatorial", N, " é", fat)
  fimse
Fimalgoritmo