algoritmo "analisadordevalores"
var
    Conte, Soma, Div5, Nulo, SomaPar, N: inteiro
    Media: real
inicio
     Soma <- 0
     SomaPar <- 0
     Div5 <- 0
     Nulo <- 0
     para Conte de 1 ate 5 faca
           escreva ("Digite um n�mero: ")
           leia (N)
           Soma <- Soma + N
           Media <- Soma / 2
           se (N % 5 = 0) entao
                Div5 <- Div5 + 1
           fimse
           se (N = 0) entao
                Nulo <- Nulo + 1
           fimse
           se (N % 2 = 0) entao
                SomaPar <- SomaPar + N
           fimse
     fimpara
     escreval ("Soma dos valores: ", Soma)
     escreval ("M�dia dos valores: ", Media)
     escreval ("Divis�veis por cinco: ", Div5)
     escreval ("Quantidade de nulos: ", Nulo)
     escreval ("Soma dos pares: ", SomaPar)
fimalgoritmo

