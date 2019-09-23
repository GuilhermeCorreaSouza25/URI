tam = 12
l = int(input())
t = input()
m = [[0.0 for i in range(tam)]for j in range(tam)]

cont = 0
media = 0
soma = 0

for i in range(tam):
    for j in range(tam):
        m[i][j] = float(input())

if (t == 'S'):
   for j in range(tam):
      soma+= m[l][j]
   print(soma)

if(t == 'M'):
   for j in range(tam):
      media += m[l][j]
   media = media/tam
   print(media)
