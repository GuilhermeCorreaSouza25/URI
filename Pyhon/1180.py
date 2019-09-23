n=int(input())
k=input().split(' ')
numa=[0 for i in range(n)]
for i in range (n):
    numa[i]=int(k[i])
    if i==0:
        menor=numa[0]
    if numa[i]<=menor:
        menor=numa[i]
        p=i
print('Menor valor:',menor)
print("Posicao:",p)
