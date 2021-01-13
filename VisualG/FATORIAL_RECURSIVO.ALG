Algoritmo "fatorial_recursivo"

Var
   Num: inteiro
   
funcao Fat(N: inteiro): inteiro
   Var
      i, R: inteiro
   inicio
       se (n=0) entao
         retorne 1 //criterio de parada da recursao
       senao
         retorne n* Fat(n-1)  //chamada recursiva
       fimse
   fimfuncao
Inicio
   escreval("Informe Num: ")
   leia(Num)
   escreval("Fatorial: ", Fat(Num))
Fimalgoritmo