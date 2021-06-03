Algoritmo "exercicio22" //VERIFICAR SE O VALOR EH PERFEITO
Var                     //CODIGO VISUALG DIFERENTE DE C, PQ E LIMITADO
n, divisor, somaDivisores: inteiro
resultado: logico

funcao perfeito(x: inteiro): logico
inicio
   divisor <- x
   somaDivisores <- 0
   enquanto (divisor > 1) faca
      divisor <- divisor - 1
      se (x%divisor = 0) entao
         somaDivisores <- somaDivisores + divisor
      fimse
   fimenquanto
   se (somaDivisores = x) entao
      retorne verdadeiro
   fimse
   se (somaDivisores <> x) entao
      retorne falso
   fimse
fimfuncao

Inicio
   escreval("Digite um numero:")
   leia(n)
   resultado <- perfeito(n)
   escreval(n, " eh perfeito?", resultado)

Fimalgoritmo