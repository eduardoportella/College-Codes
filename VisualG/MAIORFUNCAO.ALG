Algoritmo "maiorFuncao"
var
a, b: inteiro

funcao maior(x, y: inteiro): inteiro
var
maior, igual: inteiro

inicio
   se (x > y) entao
      retorne x
   fimse
   se (x < y) entao
      retorne y
   fimse
   se (x=y) entao
      escreval("Erro, ambos sao iguais")
      retorne -1
   fimse

fimfuncao
   
Inicio
   escreval("Digite o valor de A:")
   leia(a)
   escreval("Digite o valor de B:")
   leia(b)
   escreval("o maior numero eh", maior(a, b))

Fimalgoritmo