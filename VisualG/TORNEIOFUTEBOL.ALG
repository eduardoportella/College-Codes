algoritmo "torneiofutebol"
var
c, c2: inteiro
vet: vetor[1..3] de caractere
inicio
   escreval("-------------------------")
   escreval(" T O R N E I O  F O D A  ")
   escreval("-------------------------")
   para c <- 1 ate 3 faca
      escreval("digite o nome do", c, "º time")
      leia(vet[c])
   fimpara

   para c <- 1 ate 3 passo 1 faca
      para c2 <- 1 ate 3 faca
         se (vet[c]<>vet[c2]) entao
            escreval(vet[c]:11, "[] x []":11, vet[c2])
         fimse
      fimpara
   fimpara
fimalgoritmo