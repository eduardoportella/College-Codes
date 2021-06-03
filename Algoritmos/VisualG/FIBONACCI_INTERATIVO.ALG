Algoritmo "fibonacci_interativo"

Var
 termo: inteiro

funcao fibo(n: inteiro): inteiro
   var
   atual, ant1, ant2, i: inteiro

   inicio
      atual <- 1
      ant1 <- 1
      ant2 <- 1
      i <- 2
      
      enquanto (i<n) faca
         atual <- an1 + ant 2
         ant1 <- ant2
         ant2 <- atual
         i <- i + 1
      fimenquanto
      retorne atual

   fimfuncao

Inicio
   escreval("Informe elemento: ")
   leia(termo)
   escreval("o termo", termo, "de Fibonacci eh", fibo(termo))

Fimalgoritmo