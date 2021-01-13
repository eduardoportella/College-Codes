Algoritmo "exercicio13"

Var
n: real
intervalo0a25, intervalo26a50, intervalo51a75, intervalo76a100: inteiro

Inicio
intervalo0a25 <- 0
intervalo26a50 <- 0
intervalo51a75 <- 0
intervalo76a100 <- 0

enquanto (n>=0) faca
   escreval("digite um numero: ")
   leia(n)
   se (n>=0) e (n<=25) entao
      intervalo0a25 <- intervalo0a25 + 1
   fimse
   se (n>=26) e (n<=50) entao
      intervalo26a50 <- intervalo26a50 + 1
   fimse
   se (n>=51) e (n<=75) entao
      intervalo51a75 <- intervalo51a75 + 1
   fimse
   se (n>=76) e (n<=100) entao
      intervalo76a100 <- intervalo76a100 + 1
   fimse
fimenquanto
   
escreval("foram digitados", intervalo0a25, " pertencentes ao intervalo [0,25]")
escreval("foram digitados", intervalo26a50, " pertencentes ao intervalo [26,50]")
escreval("foram digitados", intervalo51a75, " pertencentes ao intervalo [51,75]")
escreval("foram digitados", intervalo76a100, " pertencentes ao intervalo [76,100]")
   

Fimalgoritmo