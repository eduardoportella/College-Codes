Algoritmo "vetorsomapar"
Var
v: vetor[0..9] de inteiro
i, somaPar: inteiro
Inicio
      para i de 0 ate 9 faca
           escreval("Digite o vetor ", i+1)
           leia(v[i])
           se (v[i]%2 = 0) entao
              somaPar <- somaPar + v[i]
           fimse
           i <- i + 1
      fimpara
      escreval("A soma de todos os pares eh: ", somaPar)

Fimalgoritmo

