var = input().split(" ")

a = float(var[0])
b = float(var[1])
c = float(var[2])
pi = 3.14159

Atriangulo = (a*c)/2
Acirculo = pi * (pow(c,2))
Atrapezio = ((a+b)*c)/2
Aquadrado = b*b
Aretangulo = a*b

print("TRIANGULO: %.3f"%Atriangulo)
print("CIRCULO: %.3f"%Acirculo)
print("TRAPEZIO: %.3f"%Atrapezio)
print("QUADRADO: %.3f"%Aquadrado)
print("RETANGULO: %.3f"%Aretangulo)
