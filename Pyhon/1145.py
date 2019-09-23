# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
lista = input().split(" ")
x = int(lista[0])
y = int(lista[1])
if (1 < x < 20) and (x<y<100000):
    for i in range (1,y+1):
        if i%x == 0:
           print(i)
        else:
           print(i,end=" ")
