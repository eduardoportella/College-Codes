Algoritmo "Troca"
Var
a, b: inteiro


procedimento troca(var x, y: inteiro)
var
   aux: inteiro
inicio
   aux <- x
   x <- y
   y <- aux
   
fimprocedimento


Inicio
   escreval("informe A")
   leia(a)
   escreval("informe B")
   leia(b)
   troca(a,b)
   escreval("A: ", a, "   B: ", b)

Fimalgoritmo