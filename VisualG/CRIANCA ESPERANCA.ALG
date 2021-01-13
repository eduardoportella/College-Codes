algoritmo "crianca esperanca"
var
d, v: real
inicio
      escreval("---------------------")
      escreval("--crianca esperanca--")
      escreval("---------------------")
      escreval("muito obg pela doacao")
      escreval("[1] para doar R$10,00")
      escreval("[2] para doar R$25,00")
      escreval("[3] para doar R$50,00")
      escreval("[4] para doar outros valores")
      escreval("[5} para cancelar")
      leia(d)
      escolha d
      caso 1
           v <- 10
      caso 2
           v <- 25
      caso 3
           v <- 50
      caso 4
           escreval("qual o valor da doacao? R$")
           leia (v)
      caso 5
           v <- 0
      fimescolha
      escreval("---------------------")
      escreval(" sua doacao foi de R$", v)
      escreval("muito obrigado")
fimalgoritmo
           
      
fimalgoritmo