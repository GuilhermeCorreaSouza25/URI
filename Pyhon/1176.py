z = 0
a = 0
b = 1
vetor = [0 for i in range(61)]
while z<=60:
    if z == 0:
        vetor[z] = a
    elif z == 1:
        vetor[z] = b
    else:
        a, b = b, a+b
        vetor[z] = b
    z = z + 1
t = int(input())
for i in range(t):
    n = int(input())
    print("Fib({}) = {}".format(n,vetor[n]))
