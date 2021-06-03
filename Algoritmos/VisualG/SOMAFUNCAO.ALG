algoritmo "somafuncao"
var
v1, v2, s: inteiro

funcao soma(x, y: inteiro): inteiro
inicio
   retorne x+y

fimfuncao

inicio
   escreval("digite o primeiro valor:")
   leia(v1)
   escreval("digite o segundo valor:")
   leia(v2)
   s <- soma(v1, v2)
   escreval("a soma entre", v1, " e", v2, " eh igual a", s)

fimalgoritmo