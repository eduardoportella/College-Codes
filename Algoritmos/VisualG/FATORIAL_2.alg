Algoritmo "Fatorial"

Var
   N, i, fat: inteiro

Inicio
  leia(N)
  se N<0 ent�o
     escreva("N deve ser positivo")
  senao
        i <- 2
        fat <- 1
        repita
           se N<2 ent�o
              interrompa
           fimse
           fat <- fat*i
           i<-i+1
        at� (i>N)
        escreva ("Fatorial", N, " �", fat)
  fimse
Fimalgoritmo