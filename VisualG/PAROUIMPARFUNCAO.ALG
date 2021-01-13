algoritmo "parouimparfuncao"
var
n: inteiro
r: caractere

funcao parouimpar(v: inteiro): caractere
inicio
   se (v%2=0) entao
      retorne "par"
   senao
      retorne "impar"
   fimse


fimfuncao

inicio
   escreva("digite um numero:")
   leia(n)
   R <- parouimpar(n)
   escreval("o numero", n, " eh ", r)

fimalgoritmo