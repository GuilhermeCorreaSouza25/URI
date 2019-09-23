a = int(input())
while(a!=0):
    vetor = [0]*a
    b = input().split(" ")
    for j in range(a):
        vetor[j] = int(b[j])
    inicial = int(input())
    atual = inicial
    culpado = vetor[atual-1]
    while(culpado != atual):
        atual = vetor[atual-1]
        culpado = vetor[atual-1]
    print(atual)
    a = int(input())
