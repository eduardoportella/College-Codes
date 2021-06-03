algoritmo "contanegativos"
var
n, c, totneg: inteiro
inicio
      c <- 1
      TotNeg <- 0
      repita
            escreva("digite um numero: ")
            leia(n)
            se (n<0)entao
               totneg<- totneg +1
            fimse
            c <- c+1
      ate(c>5)
      escreval("foram digitados", totneg, " numeros negativos")
fimalgoritmo