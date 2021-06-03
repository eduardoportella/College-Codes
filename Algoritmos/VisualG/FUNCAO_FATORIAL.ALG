Algoritmo "funcao_fatorial"

Var
   Num: inteiro
   
funcao Fat(N: inteiro): inteiro
   Var
      i, R: inteiro
   inicio
       se n < 0 entao
         retorne -1
       fimse
       i <- 2
       R <- 1
       enquanto (i <= N) faca
         R <- R*i
         i <- i + 1
       fimenquanto
       retorne R

   fimfuncao
Inicio
   escreval("Informe Num: ")
   leia(Num)
   escreval("Fatorial: ", Fat(Num))
Fimalgoritmo