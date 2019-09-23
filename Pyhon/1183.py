tam = 12
O = input()
m = [[0.0 for i in range(tam)]for j in range(tam)]

media = 0
soma = 0
cont = 0

for i in range(tam):
    for j in range(tam):
        m[i][j] = float(input())

for i in range(tam):
   for j in range(tam):
       if(i < j):
         cont+=1
         soma+= m[i][j]

media=soma/cont

if(O == 'S'):
   print(soma)
if(O == 'M'):
   print("{:.1f}".format(media))
