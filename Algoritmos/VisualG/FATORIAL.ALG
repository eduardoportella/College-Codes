algoritmo "fatorial"
var
n, c, f: inteiro
resp: caractere
inicio
  repita
      escreval("digite um numero:")
      leia(n)
      c <- n
      f <- 1
      repita
            f <- f*c
            c <- c-1
      ate (c < 1)
      escreval(" ")
      escreval("o fatorial de", n," eh", f)
      escreval("quer continuar? [S/N]")
      leia(resp)
  ate (resp = "n")

fimalgoritmo