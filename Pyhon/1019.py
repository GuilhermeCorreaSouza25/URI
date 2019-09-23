#Guilherme Corrêa Souza - Aluno Ciência da Computação UFV-Campos Florestal
#Programa que decompoe valores inteiros no menor numero de cedulas possiveis

#Entrada de dados
n = int(input()) #Quantidade de segundos
n1 = n // 3600 #horas
n = n % 3600
n2 = n // 60
n = n % 60
n3 = n
print("{}:{}:{}".format(n1,n2,n3))
