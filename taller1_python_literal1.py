suma_total = 0

for i in range(10):
    valor = int(input("Ingrese el valor: "))
    suma_total += valor

promedio = suma_total / 10

print("Suma:", suma_total)
print("Promedio:", promedio)