algoritmo "contadorinteligente"
var
n1, n2: real
inicio
      escreval("inicio: ")
      leia(n1)
      escreval("fim: ")
      leia(n2)
      escreval("-------CONTANDO------------")
      se (n1<=n2) entao
         enquanto (n1<=n2) faca
         escreva(" ",n1)
         n1 <- n1+1
         fimenquanto
      senao
           enquanto (n1>=n2) faca
           escreva(" ", n1)
           n1 <- n1-1
           fimenquanto
      fimse
fimalgoritmo