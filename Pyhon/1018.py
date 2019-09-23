# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
#Guilherme Corrêa Souza - Aluno Ciência da Computação UFV-Campos Florestal
#Programa que decompoe valores inteiros no menor numero de cedulas possiveis

#Entrada de dados
n = int(input())
print(n)
n1 = n//100
print(n1,"nota(s) de R$ 100,00")
n = n % 100
n2 = n//50
print(n2,"nota(s) de R$ 50,00")
n = n % 50
n3 = n//20
print(n3,"nota(s) de R$ 20,00")
n = n % 20
n4 = n//10
print(n4,"nota(s) de R$ 10,00")
n = n % 10
n5 = n//5
print(n5,"nota(s) de R$ 5,00")
n = n % 5
n6 = n//2
print(n6,"nota(s) de R$ 2,00")
n = n % 2
n7 = n//1
print(n7,"nota(s) de R$ 1,00")
