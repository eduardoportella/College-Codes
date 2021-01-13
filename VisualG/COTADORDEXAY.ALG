algoritmo "cotadordexay"
var
contador, n, s, maior: inteiro
inicio
      contador<- 1
      s <- 0
      enquanto (contador<=10) faca
      escreva("digite o ", contador,".o valor: ")
      leia(n)
      se (n>maior) entao
         maior <- n
      fimse
      s <- s+n
      contador <- contador + 1
      fimenquanto
      escreval("a soma de todos os valores foi:", s)
      escreval("o maior valor digitado foi:", maior)

fimalgoritmo