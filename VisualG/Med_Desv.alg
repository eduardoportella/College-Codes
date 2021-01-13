Algoritmo "Med_Desv"

Var
  a,b,c, media, desvio: real
  
  função maior(x, y: real): real
  inicio
      se (x > y) então
         retorne x
      senão
         retorne y
      fimse
  fimfunção
  
  procedimento md(x,y,z: real; var med, desv: real)
  inicio
     med <- (x+y+z)/3
     desv <- ((x-med)^2 + (y-med)^2 + (z-med)^2)
     desv <- RaizQ(desv)
  fimprocedimento

Inicio
  escreva("Informe A: ")
  leia(a)
  escreva("Informe B: ")
  leia(b)
  escreva("Informe C: ")
  leia(c)
  md(a,b,c,media,desvio)
  escreval("Média: ", media, "  Desvio: ", desvio)
  escreval("Maior: ", maior(a,b))
Fimalgoritmo