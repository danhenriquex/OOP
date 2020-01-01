import pdb

# Uma tupla é uma lista imutável, ou seja, uma tupla é uma sequência que não pode ser alterada
# depois de criada.

dias = ('segunda', 'terça', 'quarta', 'quinta', 'sexta', 'sabado', 'domingo')

print(type(dias))

print(dias)

texto = 'python'

print(tuple(texto))

lista = [1, 2, 3, 4, 'danilo']

print(tuple(lista))

tupla = (1, 2, lista)

print(tupla)

# O range é um tipo de seqüência imutável de números e é comumente usado para looping de um
# número específico de vezes em um comando for já que representam um intervalo. O comando range
# gera um valor contendo números inteiros sequenciais.

sequencia = range(1, 3)

print(sequencia)

for valor in range(1, 3):
    print(valor)

for valor in range(1, 10, 2):
    print(valor)
