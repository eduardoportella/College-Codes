algoritmo "analisadorstrings"
var
nome: caractere
c: inteiro

inicio
   escreva("digite seu nome:")
   leia(nome)
   escreval("total de letras do seu nome:", compr(nome))
   escreval("seu nome em maiusculas eh: ", maiusc(nome))
   escreval("seu nome em minusculas eh: ", minusc(nome))
   escreval("a primeira letra do seu nome eh: ", copia(nome, 1, 1))
   escreval("a ultima letra do seu nome eh: ", copia(maiusc(nome), compr(nome), 1))
   escreval("tem a letra a na posicao:", pos("a", nome))
   escreval("o codigo da letra a eh:", asc("A"))
   escreval("a letra do codigo 65 eh:", carac(65))
   
   para c <- compr(nome) ate 1 passo -1 faca
      escreva(copia(maiusc(nome), c,1))
   fimpara

fimalgoritmo