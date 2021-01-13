algoritmo "matrizpar"
var
m: vetor[1..3, 1..3] de inteiro
l, c, totpar: inteiro
inicio
   totpar <- 0
   para l <- 1 ate 3 faca
      para c <- 1 ate 3 faca
         escreva("digite o valor de [", l, ",", c, "]: ")
         leia(m[l,c])
      fimpara
   fimpara
   
   escreval("")
   
   para l <- 1 ate 3 faca
      para c <- 1 ate 3 faca
         se(m[l,c] % 2 = 0) entao
            escreva("{", m[l,c], "}":4)
            totpar <- totpar+1
         senao
            escreva(m[l,c]:5)
         fimse
      fimpara
      escreval()
   fimpara
   escreval("o total de numeros pares eh:", totpar)


fimalgoritmo