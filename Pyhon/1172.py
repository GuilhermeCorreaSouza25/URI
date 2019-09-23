n = [0 for i in range(10)]
for p in range (10):
    n[p] = int(input())
    if n[p] <= 0:
        n[p] = 1
        print("X[{}] = {}".format(p,n[p]))
    else:
        print("X[{}] = {}".format(p,n[p]))
