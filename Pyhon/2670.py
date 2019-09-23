# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
a = int(input())
b = int(input())
c = int(input())

p = (b*2)+(c*4)
s = (a*2)+(c*2)
t = (b*2)+(a*4)

if p<=s and p<=t:
    print(p)
elif s<=p and s<=t:
    print(s)
elif t<=p and t<=s:
    print(t)
