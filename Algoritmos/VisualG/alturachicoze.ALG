Algoritmo "semnome"

Var
chico, ze, anos: real


Inicio
   chico <- 1.50
   ze <- 1.10
   anos <- 0
   
   enquanto (chico > ze) faca
      chico <- chico + 0.02
      ze <- ze + 0.03
      anos <- anos + 1
   fimenquanto
   
   escreval("o total de anos para que ze seja maior que chico sao", anos)


Fimalgoritmo