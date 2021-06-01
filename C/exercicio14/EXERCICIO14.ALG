Algoritmo "exercicio14"

Var
somaN, somaPares, mediaPares, mediaTot: real
numerosPares, numerosImpares, totalN, n: inteiro



Inicio

escreval("digite um numero: ")
leia(n)
totalN <- 1
somaN <- n
se (n%2=0) entao
   numerosPares <- 1
   somaPares <- n
senao
   numerosImpares <- 1
fimse
enquanto (n<>0) faca
   leia(n)
   se (n%2=0) e (n<>0) entao
      numerosPares <- numerosPares + 1
      somaPares <- somaPares + n
      totalN <- totalN + 1
      somaN <- somaN + n
   fimse
   se (n%2<>0) e (n<>0) entao
      numerosImpares <- numerosImpares + 1
      totalN <- totalN + 1
      somaN <- somaN + n
   fimse

fimenquanto

mediaPares <- somaPares/numerosPares
mediaTot <- somaN/totalN

escreval("Foram digitados", numerosPares, " numeros pares")
escreval("Foram digitados", numerosImpares, " numeros impares")
escreval("A media dos numeros pares eh", mediaPares)
escreval("A media de todos os numeros eh", mediaTot)


Fimalgoritmo