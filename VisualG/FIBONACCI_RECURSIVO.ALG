Algoritmo "fibonacci_recursivo"

Var
termo: inteiro

funcao fibo(n:inteiro):inteiro
   inicio
      se ((n=1) ou (n=2)) entao
         retorne  1
      senao
         retorne fibo(n-1)+ fibo(n-2)
      fimse
      fimfuncao
Inicio
   escreval("informe elemento: ")
   leia(termo)
   escreval("o", termo, "º termo de Fibonacci eh", fibo(termo))

Fimalgoritmo