algoritmo "gabarito"
var
   gabarito: vetor[1..5] de caractere
   nomealuno: vetor [1..5] de caractere
   notaaluno: vetor [1..5] de inteiro
   respaluno: vetor [1..5] de caractere
   g, a, a2, x, c3: inteiro
   media: real

inicio
   escreval("DIGITE O GABARITO")
   escreval("-----------------")
   para g <- 1 ate 5 faca
      escreval("questao", g, ":")
      leia(gabarito[g])
   fimpara

   limpatela

   para a <- 1 ate 5 faca
      x <- 1
      escreval("-----------------")
      escreval("ALUNO", a)
      escreval("-----------------")
      escreval("")
      escreval("nome:")
      leia(nomealuno[a])
      limpatela
      escreval("-----------------")
      escreval("respostas dadas:")
      escreval("-----------------")
      para a2 <- 1 ate 5 faca
         escreval("digite a resposta de ", nomealuno[a], " na questao", x)
         leia(respaluno[a2])
         x <- x+1
         se (respaluno[a2]=gabarito[a2]) entao
            notaaluno[a] <- notaaluno[a] + 2
            media <- media + 2
         fimse
      fimpara
      limpatela
   fimpara
   
   media <- media/5
   
   limpatela
   
   escreval("-----------------")
   escreval("NOTAS FINAIS:")
   escreval("-----------------")

   para c3 <- 1 ate 5 faca
      escreval("nome do aluno:", nomealuno[c3]:15, "nota:", notaaluno[c3])
   fimpara
   
   escreval("")
   escreval("a media da turma foi:", media)


fimalgoritmo