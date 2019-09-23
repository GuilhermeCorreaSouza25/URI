# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
#Guilherme Corrêa Souza
#entrada de dados
renda = float(input())

if renda <= 2000.00:
    print("Isento")

if renda > 2000.00 and renda <= 3000.00:
   renda = (renda-2000.00) * 0.08
   print("R$ %.2f"%renda)

if renda > 3000.00 and renda <= 4500.00:
   renda =(renda-3000.00)*0.18 +(1000.00 * 0.08)
   print("R$ %.2f"%renda)

if renda > 4500.00:
    renda = (renda-4500)*0.28 + (1500*0.18) + (1000*0.08)
    print("R$ %.2f"%renda)
