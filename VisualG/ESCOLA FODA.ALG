algoritmo "escola foda"
var
   n1, n2, media: real
   x: caractere
inicio
   escreval("ESCOLA DO EDUARDIN SUPER FODA")
   escreval("bem vindo, professor com salario ruim")
   escreval("digite a primeira nota")
   leia(n1)
   escreval("digite a segunda nota")
   leia(n2)
   media <- (n1+n2)/2
   se (media>9) entao
      x <- "A"
      senao
           se (media<=8.9) e (media>=8)entao
           x <- "B"
           senao
                se (media<=7.9) e (media>=7) entao
                x <- "C"
                senao
                     se (media<=6.9) e (media>=6) entao
                     x <- "D"
                     senao
                          se (media<=5.9) e (media>=9) entao
                          x <- "E"
                          senao
                          x <- "F"

                     fimse
                fimse
           fimse
      fimse
   fimse
   escreval("a media eh de: ", media)
   escreval("o aproveitamento eh: ", x)
fimalgoritmo