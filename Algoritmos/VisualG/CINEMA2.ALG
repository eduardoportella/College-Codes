algoritmo "cinema2"
var
c, r: inteiro
resp: caractere
cadeira, reserva, aux: vetor[1..10] de inteiro

inicio
   para c <- 1 ate 10 faca
      cadeira[c] <- c
   fimpara
   
   repita
      para c <- 1 ate 10 faca
         se(cadeira[c]<>reserva[c]) entao
            escreva("{B", c, "}")
         senao
            escreva("{---}")
         fimse
      fimpara
      
      escreval("")
      escreval("--------------------------")
      escreval("reservar a cadeira B:")
      leia (r)
      reserva[r] <- r
      
      se (aux[r]=0) entao
         escreval("cadeira reservada com sucesso")
      senao
         escreval("ERRO. cadeira ja reservada")
      fimse
      
      escreval("quer reservar outra cadeira? [S/N]")
      leia (resp)
      limpatela
      aux[r] <- r
      
   ate (resp="n")
   

fimalgoritmo