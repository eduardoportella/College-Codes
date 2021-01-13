algoritmo "detector de pesado"
var
i: inteiro
n, pesado: caractere
p, mai: real

procedimento Topo()
inicio
limpatela
   escreval("-----------------------------------")
   escreval(" D E T E C T O R  D E  P E S A D O ")
   escreval("maior peso ate agora:", mai, "kg")
   escreval("-----------------------------------")
fimprocedimento

inicio
   topo()

   para i <- 1 ate 5 faca
      escreva("digite o nome: ")
      leia(n)
      escreva("digite o peso de ", n, ":")
      leia(p)
      se (p>mai) entao
         mai <- p
         pesado <- n
      fimse
      topo()
   fimpara
   topo()
   escreval("a pessoa mais pesada foi: ", pesado," com", mai, " quilos")

fimalgoritmo