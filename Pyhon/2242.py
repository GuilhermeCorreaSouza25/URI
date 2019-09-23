lista = input()
tam = len(lista)
cont = 0
lista1 = []

for j in range(0,tam):
    if lista[j] == 'a' or lista[j] == 'e' or lista[j] == 'i' or lista[j] == 'o' or lista[j] == 'u':
        lista1.append(lista[j])

if lista1 == lista1[::-1]:
    print("S")
else:
    print("N")
