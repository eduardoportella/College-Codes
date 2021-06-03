algoritmo "supercontador"
var
   c, op: inteiro

inicio
   escreval("-------------------")
   escreval("|     M E N U     |")
   escreval("-------------------")
   escreval("[1] de 1 ate 10")
   escreval("[2] de 10 ate 0")
   escreval("[3] sair")
   escreval("-------------------")
   leia(op)
   se (op = 1) entao
   repita
      escolha op
      caso "1"
         c <- 1
         repita
            escreva(c)
            c <- c+1
         ate (c>10)
      caso "2"
         c <- 10
         repita
            escreva(c)
            c <- c-1
         ate (c=0)
   ate(op=3)
fimescolha

fimalgoritmo