lista1 = input().split(" ")
codigo_peca1 = int(lista1[0])
qtde_peca1 = int(lista1[1])
valor_unit_peca1 = float(lista1[2])

lista2 = input().split(" ")
codigo_peca2 = int(lista2[0])
qtde_peca2 = int(lista2[1])
valor_unit_peca2 = float(lista2[2])

valor_total = ((qtde_peca1*valor_unit_peca1) + (qtde_peca2*valor_unit_peca2))

print("VALOR A PAGAR: R$ %.2f" %valor_total)