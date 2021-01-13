algoritmo "valorespares"
var
n, cont: inteiro
inicio
   escreval("digite um valor:")
   leia(n)
   se (n%2=1) entao
      n <- n-1
   fimse
   para cont <- n ate 0 passo -2 faca
      escreva(cont)
   fimpara

fimalgoritmo