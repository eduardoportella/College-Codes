algoritmo "somaparametrosreferencia"
var
   x, y: inteiro
   
procedimento soma (var a, b: inteiro)
inicio
   a <- a+1
   b <- b+2
   escreval("o valor de a vale", a)
   escreval("o valor de b vale", b)
   escrevaL("Soma a+b=", a+b)
fimprocedimento
inicio
   x <- 4
   y <- 8
   soma (x,y)
   escreval("valor de x =", x)
   escreval("valor de y =", y)

fimalgoritmo