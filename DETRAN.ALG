algoritmo "DETRAN"
var
  A, N, idade: inteiro


inicio
   ESCREVAL("-----------------------------")
   ESCREVAL(" DEPARTAMENTO DE TRANSITO ")
   ESCREVAL ("----------------------------")
   ESCREVA (" Ano Atual (yyyy): ")
   Leia (A)
   Escreva ( " Ano de Nascimento (yyyy): ")
   Leia (N)
   idade <- A - N
   
    ESCREVAL("    ")
   ESCREVAL("----------Status----------- ")
   
   Escreval ( " Idade: ", idade, " anos" )
   
   Se ( idade >= 21)entao
      escreval(" Apto a tirar carteira! :) ")
      ESCREVAL("-----------------------------")
   Senao
        Escreval( " Não está apto a tirar carteira! :( ")
        ESCREVAL("-----------------------------")
        


        
        Fimse

   
   


fimalgoritmo