Algoritmo "primoFuncao"
Var
divisor, n, primoRetorno: inteiro

Funcao primo(x: inteiro): logico
inicio
   divisor <- x
   primoRetorno <- 1
   enquanto (divisor>2) faca
      divisor <- divisor - 1
      se (x%divisor = 0) entao
         primoRetorno <- 0
      fimse
   fimenquanto
   se (primoRetorno = 1) entao
      retorne verdadeiro
   senao
      retorne falso
   fimse               //ERRO CODIGO VISUALG, C FUNCIONA!!!!
fimfuncao
Inicio
   escreval("Digite um numero: ")
   leia(n)
   se (primo(n) = verdadeiro) entao
      escreval(n " eh primo")
   senao
      escreval(n " nao eh primo")
   fimse


Fimalgoritmo