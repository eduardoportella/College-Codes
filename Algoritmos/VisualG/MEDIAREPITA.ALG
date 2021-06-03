Algoritmo "mediarepita"

Var
 i, n: inteiro
 med: real



Inicio
   i <- 1
   med <- 0
   repita
      i <- i + 1
      leia(n)
      med <- n+med
   ate i > 20
   med <- med/20
   escreval("a media e", med)


Fimalgoritmo