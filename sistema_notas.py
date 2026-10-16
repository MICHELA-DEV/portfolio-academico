# Lista para armazenar as notas inseridas
notas = []

try:
    # Solicita a quantidade de notas a inserir
    quantidade = int(input("Digite o numero de notas que irao ser inseridas: "))
    
    # Loop para solicitar cada nota
    for contador in range(quantidade):
        try:
            nota = float(input(f"Digite a nota {contador + 1}: "))
            notas.append(nota)
        except ValueError:
            print("Entrada invalida. Por favor, digite apenas numeros para as notas.")

    # Verifica se foram inseridas notas validas na lista
    if notas:
        media = sum(notas) / len(notas)
        
        if media >= 7.0:
            situacao = "APROVADO"
        else:
            situacao = "REPROVADO"

        # Exibe o relatorio final
        print("\n" + "="*30)
        print("      RELATORIO DE NOTAS      ")
        print("="*30)
        print(f"NOTAS: {notas}")
        print(f"MEDIA DAS NOTAS: {media:.2f}")
        print(f"SITUACAO: {situacao}")
        print("="*30)
    else:
        print("Nenhuma nota valida foi inserida.")

except ValueError:
    print("Entrada invalida. Por favor, digite um numero inteiro para a quantidade.")