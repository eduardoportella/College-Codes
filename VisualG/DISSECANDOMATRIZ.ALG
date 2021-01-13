algoritmo "dissecandomatrizz"
var
m: vetor [1..4, 1..4] de inteiro
i, j, resp: inteiro

inicio
   para i <- 1 ate 4 faca
      para j <- 1 ate 4 faca
         escreva("digite o valor de [", i, ",", j, "]")
         leia(m[i,j])
      fimpara
   fimpara
   
   repita
      escreval()
      escreval("---------------------")
      escreval("    MENU DE OPCOES   ")
      escreval("---------------------")
      escreval("[1] mostrar a matriz")
      escreval("[2] diagonal principal")
      escreval("[3] triangulo superior")
      escreval("[4] triangulo inferior")
      escreval("[5] sair")
      leia(resp)
      escreval()
      se (resp=1) entao
         limpatela
         escreval("MATRIZ:")
         escreval("")
         para i <- 1 ate 4 faca
            para j <- 1 ate 4 faca
               escreva(m[i,j]:2)
            fimpara
            escreval()
         fimpara
      fimse
      
      se (resp=2) entao
         limpatela
         escreval("DIAGONAL PRINCIPAL")
         escreval()
         para i <- 1 ate 4 faca
            para j <- 1 ate 4 faca
               se (i=j) entao
                  escreva(m[i,j]:2)
               senao
                  escreva(" ":2)
               fimse
            fimpara
            escreval()
         fimpara
      fimse
      
      se (resp=3)entao
         limpatela
         escreval("TRIANGULO SUPERIOR")
         escreval("")
         para i <- 1 ate 4 faca
            para j <- 1 ate 4 faca
               se (i<j ) entao
                  escreva(m[i,j]:2)
               senao
                  escreva(" ":2)
               fimse
            fimpara
            escreval()
         fimpara
      fimse
      
      se (resp=4) entao
         limpatela
         escreval("TRIANGULO INFERIOR")
         escreval("")
         para i <- 1 ate 4 faca
            para j <- 1 ate 4 faca
               se (i>j) entao
                  escreva(m[i,j]:2)
               senao
                  escreva(" ":2)
               fimse
            fimpara
            escreval("")
         fimpara
      fimse
      
   ate (resp=5)
      limpatela
      escreval("SAINDO")
      escreval("")
      
   

fimalgoritmo