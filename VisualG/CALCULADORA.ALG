Algoritmo "calculadora"
Var
val1, val2, r: real
oper, op: caractere
x, y: inteiro

Inicio
   repita
      escreval("Valor 1: ")
      leia(val1)
      escreval("Valor 2: ")
      leia(val2)
      escreval("Operador: ")
      leia(oper)

      escolha oper
         caso "+"
            r <- val1+val2
            escreval("Soma = ", r)
         caso "-"
            r <- val1-val2
            escreval("Diferença = ", r)
         caso "*"
            r <- val1*val2
            escreval("Produto = ", r)
         caso "/"
            se (val2 <> 0) entao
               r <- val1/val2
               escreval("Divisão = ", r)
            senao
               escreval("Divisão por 0")
            fimse
         caso "%"
            x <- int(val1)
            y <- int(val2)
            r <- x % y
            escreval("Resto: ", r)
         outrocaso
            escreval("Operador Desconhecido")
         fimescolha
         
         escreval("Deseja continuar? [s/n]")
         leia(op)

      ate(op="n")

Fimalgoritmo