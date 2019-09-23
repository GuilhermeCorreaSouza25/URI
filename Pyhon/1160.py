c = int(input())

for i in range(1,c+1):
    entrada = input().split(" ")
    pa = int(entrada[0])
    pb = int(entrada[1])
    g1 = float(entrada[2])
    g2 = float(entrada[3])

    anos = 0
    while pa <= pb:
        pa += int(pa * (g1 / 100))
        pb += int(pb * (g2 / 100))
        anos += 1
        if anos > 100:
            print("Mais de 1 seculo.")
            break

    if anos <= 100:
        print(anos,"anos.")
