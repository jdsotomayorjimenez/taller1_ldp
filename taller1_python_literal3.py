import random as r

sucursales = []
ventas = []

for i in range(25):
    sucursales.append(f"Sucursal {i+1}")
    ventas.append(r.randint(1000, 10000))

promedio = sum(ventas) / 25
print("El promedio de ventas es:", promedio)

print("Sucursales con ventas mayores al promedio:")
for i in range(25):
    if ventas[i] > promedio:
        print(f"{sucursales[i]}: {ventas[i]}")