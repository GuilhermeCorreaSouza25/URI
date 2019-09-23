lista = input().split(" ")
codigo = float(lista[0])
qtde = float(lista[1])

if codigo == 1:
    valor = 4.00*qtde
elif codigo == 2:
    valor = 4.50*qtde
elif codigo == 3:
    valor = 5.00*qtde
elif codigo == 4:
    valor = 2.00*qtde
elif codigo == 5:
    valor = 1.50*qtde

print("Total: R$ %.2f"%valor)
