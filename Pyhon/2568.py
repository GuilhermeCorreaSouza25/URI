#Guilherme Correa Souza - 3509
#Aryel Penido - 3500
#UFV-Campus Florestal
lista = input().split(" ")
d = int(lista[0])
i = int(lista[1])
x = int(lista[2])
f = int(lista[3])

j = 1
for j in range (1,f+1):
    if (d+j)%2 == 0:
        i = i + x
    elif (d+j)%2 != 0:
        i = i - x
print(i)
