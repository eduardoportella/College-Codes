algoritmo "quantosentre0e10"
var
tot010, simp, c, v: inteiro
inicio
   tot010 <-  0
   simp <- 0
   para c <- 1 ate 6 faca
      escreva("digite um valor: ")
      leia(v)
      se (v >= 0) e (v <= 10) entao
         tot010 <- tot010 + 1
         se (v%2=1) entao
            simp <- simp + v
         fimse
      fimse
    fimpara
    escreval("o total de numeros entre 0 e 10 eh", tot010)
    escreval("nesse intervalo, a soma de impares foi", simp)
fimalgoritmo