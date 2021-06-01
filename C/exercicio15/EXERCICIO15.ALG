Algoritmo "exercicio15"

Var
soma, n: real


Inicio
   escreval("digite o enesimo termo da equacao 1/1 + 1/2 + ... + 1/n")
   leia(n)
   soma <- soma + 1/n
   enquanto (n > 1) faca
      escreva("1 /",n, "  +  ")
      n <- n-1
      soma <- soma + 1/n
   fimenquanto
   escreval("1 / 1") //como enquanto eh n>1, complementar este termo
   escreval("o resultado eh", soma)


Fimalgoritmo