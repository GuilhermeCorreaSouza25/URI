medias = 0

while(w1 != w2 and w1!= r and w2 != r):
    lista = input().split(" ")
    w1 = float(lista[0])
    w2 = float(lista[1])
    r = float(lista[2])
    mr1 = w1*(1+(r/30))
    mr2 = w2*(1+(r/30))
    m=(mr1+mr2)/2

    if w1== 0 and w2==0 and r==0:
        break

    if (1 <= m < 13):
        print("Nao vai da nao")
    if (13 <= m < 14):
        print("E 13")
    if (14 <= m < 40):
        print("Bora , hora do show!  BIIR!")
    if (40 <= m < 60):
        print("Ta saindo da jaula o monstro")
    if (m > 60):
        print("AQUI E BODYBUILDER! !")
    medias = medias + m
if medias>40:
    print("\nAqui nois constroi fibra rapaz! Nao e agua com musculo!")