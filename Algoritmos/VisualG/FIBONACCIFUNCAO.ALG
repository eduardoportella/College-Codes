algoritmo "fibonaccifuncao"
var
n1, n2, n3, t1, tot: inteiro

funcao proximofibonacci(var a, b: inteiro): inteiro
var
c: inteiro
inicio

      c <- a+b
      a <- b
      b <- c
      retorne c

fimfuncao
inicio
   n1 <- 0
   escreval(n1)
   n2 <- 1
   escreval(n2)
   para tot <- 3 ate 5 faca
      n3 <- proximofibonacci(n1, n2)
      escreval(n3)
   fimpara



fimalgoritmo