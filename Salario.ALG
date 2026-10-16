algoritmo "Salario"

var
   Nome: caractere
   Sal, NSal : Real
   dep: Inteiro

inicio
      Escreva (" Qual o nome do funcionario?")
      Leia (Nome)
      Escreva ( " Qual o salario do funcinario ? R$")
      Leia ( Sal)
      Escreva ( " Qual é a quantidade de dependentes?")
      Leia (dep)
      Escolha dep
             Caso 0
             Nsal <- Sal + ( Sal*5/100)
             Caso 1, 2, 3
             NSal <- Sal +( Sal*10/100)
             Caso 4,5,6
             Nsal <- Sal + ( Sal*15/100)
             OutroCaso
             Nsal <- Sal + ( Sal*18/100)

       Fimescolha
       Escreval ( " O novo salário de ", Nome, " será de R$ ", NSal: 5:2)

fimalgoritmo