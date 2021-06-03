Algoritmo "medianotasvetor"
Var
   nota: vetor[1..8] de real
   i: inteiro
   media: real
Inicio
   //leitura de um vetor
   media <- 0
   para i de 1 ate 8 faca
      escreva("Nota aluno ", i, ": ")
      leia (nota[i])
      media <- media + nota[i] //soma das notas
   fimpara
   media <- media /8
   
   //mostrar elementos do vetor
   para i de 1 ate 8 faca
      escreval("Nota: ", i, " = ", nota[i])
   fimpara
   //mostrar a media
   escreval("media das notas: ", media)

Fimalgoritmo