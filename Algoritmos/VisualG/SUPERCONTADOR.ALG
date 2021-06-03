algoritmo "supercontador"
var
   c, op: inteiro

inicio
   repita
      escreval("-------------------")
      escreval("|     M E N U     |")
      escreval("-------------------")
      escreval("[1] de 1 ate 10")
      escreval("[2] de 10 ate 0")
      escreval("[3] sair")
      escreval("-------------------")
      leia(op)
      se (op = 1) entao
         c <- 1
         repita
            escreval(c)
            c <- c+1
         ate (c>10)
      senao
         se (op = 2) entao
            c <- 10
            repita
               escreval(c)
               c <- c-1
            ate (c<1)
         fimse
      fimse
   ate (op = 3)
   escreval("saindo")
fimescolha

fimalgoritmo