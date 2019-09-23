# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
combustivel = int(input())
alcool = 0
gasolina = 0
diesel = 0

while combustivel != 4:
    combustivel = int(input())

    if combustivel == 1:
        alcool+=1
    if combustivel == 2:
        gasolina+=1
    if combustivel == 3:
        diesel+=1
    if combustivel == 4:
        break

print("MUITO OBRIGADO")
print("Alcool:",alcool)
print("Gasolina:",gasolina)
print("Diesel:", diesel)
