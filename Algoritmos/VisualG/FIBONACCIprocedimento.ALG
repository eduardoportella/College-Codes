algoritmo "fibonacci"
var
n1,  n2, t1, tot: inteiro

procedimento proximofibonacci(var a, b: inteiro)
var
c: inteiro
inicio

   c <- a+b
   escreva(c)
      a <- b
      b <- c

fimprocedimento
inicio
   n1 <- 0
   escreva(n   1)
   n2 <- 1
   escreva(n2)
   tot <- 0
   para tot <- 3 ate 10 faca
      proximofibonacci(n1,n2)
   fimpara



fimalgoritmo