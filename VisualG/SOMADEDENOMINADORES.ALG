Algoritmo "somadedenominadores"
Var
resp, a: inteiro

funcao soma(n: inteiro): real
inicio
   se (n=1) entao
      retorne 1
   senao
      retorne 1/n + soma(n-1)
   fimse
fimfuncao


Inicio
   escreval("digite o enesimo termo da equacao 1/1+ 1/2 + ... + 1/n")
   leia(a)
   escreval("o resultado eh ", soma(a))


Fimalgoritmo