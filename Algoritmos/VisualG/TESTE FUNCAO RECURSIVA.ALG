Algoritmo "teste funcao recursiva"
Var
resp, qtde: inteiro

funcao x(n, m: inteiro): inteiro
inicio
   qtde <- qtde + 1
   se ((n=m) ou (m=0)) entao
      retorne 1
   senao
      retorne x(n-1, m) + x(n-1, m-1)
   fimse
fimfuncao

Inicio
   qtde <- 0
   resp <- x(5,3)
   escreval("resultado: ", resp)
   escreval("Quantidade de chamadas: ", qtde)


Fimalgoritmo