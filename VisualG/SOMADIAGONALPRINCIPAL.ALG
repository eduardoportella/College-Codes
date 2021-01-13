algoritmo "somadiagonalprincipal"
var
 mat: vetor[1..4, 1..4] de inteiro
 i, j, sDP, p2l, m3c: inteiro

inicio
   m3c <- 0
   sDP <- 0
   p2l <- 1
   para i <- 1 ate 4 faca
      para j <- 1 ate 4 faca
         escreva("digite o valor de [", i, ",", j, "]")
         leia(mat[i,j])
         se (i=j) entao
            sDP <- sDP + mat[i,j]
         fimse
      fimpara
      escreval()
   fimpara
   
   para i <- 1 ate 4 faca
      para j <- 1 ate 4 faca
         escreva(mat[i,j]:4)
      fimpara
      escreval()
   fimpara
   
   para j <- 1 ate 4 faca
      p2l <- p2l * mat[2,j]
   fimpara
   
   para i <- 1 ate 4 faca
      se (mat[i, 3] > m3c) entao
         m3c <- mat[i,3]
      fimse
   fimpara

   escreval("a soma da diagonal principal eh: ", sDP)
   escreval("o produto da segunda linha eh: ", p2l)
   escreval("o maior valor da 3º coluna eh: ", m3c)

fimalgoritmo