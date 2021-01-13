algoritmo "creuza05"
var
emp, par, valor, final: real
inicio
      escreva("qual o valor do emprestimo?")
      leia(emp)
      escreva("qual o valor das parcelas?")
      leia(par)
      valor <- emp + (emp*20)/100
      final <- valor/par
      escreva("vou pagar", par," parcelas de R$", final)
fimalgoritmo