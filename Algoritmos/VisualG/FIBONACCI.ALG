algoritmo "fibonacci"
var
n1,  n2, t1, tot: inteiro
inicio
   n1 <- 1
   n2 <- 0
   tot <- 0
   para tot <- 1 ate 15 faca
      tot <- tot+1
      t1 <- n1+n2
      n1 <- n2
      n2 <- t1
      escreva(t1)
   fimpara



fimalgoritmo