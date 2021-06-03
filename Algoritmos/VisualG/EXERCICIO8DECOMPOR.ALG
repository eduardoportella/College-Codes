Algoritmo "exercicio8Decompor"

Var
valor, c100, c50, c10, c5, c1: inteiro


Inicio
   escreval("informe um valor: ")
   leia(valor)
   c100 <- 0
   c50 <- 0
   c10 <- 0
   c5 <- 0
   c1 <- 0
   enquanto (valor > 0) faca
      se (valor >= 100) entao
         valor <- valor - 100
         c100 <- c100 + 1
      senao
         se (valor >= 50) entao
         valor <- valor - 50
         c50 <- c50 + 1
         senao
            se (valor >= 10) entao
            valor <- valor - 10
            c10 <- c10 + 1
            senao
               se (valor >= 5) entao
               valor <- valor - 5
               c5 <- c5 + 1
               senao
                  se (valor >= 1) entao
                  valor <- valor - 1
                  c1 <- c1 + 1
                  fimse
               fimse
            fimse
         fimse
      fimse

      fimenquanto
      
      escreval("cedulas de 100: ", c100)
      escreval("cedulas de 50: ", c50)
      escreval("cedulas de 10: ", c10)
      escreval("cedulas de 5: ", c5)
      escreval("cedulas de 1: ", c1)


Fimalgoritmo