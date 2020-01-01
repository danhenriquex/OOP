import pdb

# Um conjunto, diferente de uma
# sequência, é uma coleção não ordenada e que não admite elementos duplicados.

frutas = {'laranja', 'banana', 'uva', 'pera', 'laranja', 'uva', 'abacate'}

print(frutas)

print(type(frutas))

a = set('abacate')
b = set('abacaxi')

print(a)
print("\n=================\n")
print(b)
print("\n=================\n")

print(a - b) # Diferença
print(a ^ b) # Diferença simétrica

def f():
    print("oi")


