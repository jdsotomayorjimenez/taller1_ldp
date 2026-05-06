import random as r

pares = []
impares = []

for i in range(500):
    valor = r.randint(50,100)
    es_par = valor % 2
    if es_par != 0:
        impares.append(valor)
    else:
        pares.append(valor)
    
total_pares = len(pares)
total_impares = len(impares)

print("El total de numeros pares es:", total_pares)
print("El total de numeros impares es:", total_impares)