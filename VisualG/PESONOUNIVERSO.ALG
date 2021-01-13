Algoritmo "pesonouniverso"
Var
peso: real
planeta: inteiro
resp: caractere

Inicio
   repita
   escreval("Digite o peso: ")
   leia(peso)
   escreval("Digite o numero do planeta [1-6]")
   leia(planeta)
         escolha planeta
            caso 1
               peso <- peso*0.37
               escreval("o peso em mercurio eh", peso)
            caso 2
               peso <- peso*0.88
               escreval("o peso em venus eh", peso)
            caso 3
               peso <- peso*0.38
               escreval("o peso em marte eh", peso)
            caso 4
               peso <- peso*2.64
               escreval("o peso em jupiter eh", peso)
            caso 5
               peso <- peso*1.15
               escreval("o peso em saturno eh", peso)
            caso 6
               peso <- peso*1.17
               escreval("o peso em urano eh", peso)
            outrocaso
               escreval("erro. numeros desconhecidos")
         
            fimescolha
            escreval("Deseja continuar? [s/n]")
            leia(resp)
         
   ate (resp = "n")

Fimalgoritmo