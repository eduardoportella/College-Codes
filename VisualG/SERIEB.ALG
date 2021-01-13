algoritmo "serieb"
var
op, pe, d: real
s: caractere

inicio
   escreval("OPERARIO X BRASIL DE PELOTAS")
   escreval("-----------------------------")
   escreval("quantos gols o operario fez?")
   leia(op)
   escreval("quantos gols o brasil de pelotas fez?")
   leia(pe)
   d <- abs(op-pe)
     se (d=0)entao
     s <- "empate"
     senao
          se (d<=3) entao
          s <- "normal"
          senao
               se(d>=4)entao
               s <- "GOLEADA"
               fimse
          fimse
     fimse
    escreval("-----------------")
    escreval("diferenca = ", d)
    escreval("status: ", s)
    se (op>pe)entao
       escreval("VAMO OPERARIOOOOO, PELOTAS EH FREGUESSSSS")
    senao
       escreval("JUIZ LADRAAAAAAO")
    fimse
    escreval("-----------------")
fimalgoritmo