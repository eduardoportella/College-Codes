Algoritmo "mediaenquanto"

var
   i, n1, n2, aux: inteiro
   med: real


Inicio
   i <- 0
   med <- 0
   n2 <- 0
   escreval("digite 20 números:")
   enquanto i<20 faca
      leia (n1)
      n2 <- n1+n2
      i <- i+1
   fimenquanto
   med <- n2/20
   escreval("a media eh", med)

Fimalgoritmo