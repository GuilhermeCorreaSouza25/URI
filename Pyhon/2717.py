""""Programa em Python
Guilherme Corrêa Souza - Ciência da Computação
Ufv-Florestal -3509"""
#entrada de dados
n = int(input())
lista=input().split(" ")
a = int(lista[0])
b = int(lista[1])
if (a + b) > n :
    print("Deixa para amanha!")
else:
    print("Farei hoje!")
