import pdb

# lista = list('python');

# print(lista);

lista = [2, 3, 5, 7, 11]

print(lista[0:2]) # 2 primeiros elementos da lista
print(lista[2:]) # Todos os elementos menos os 2 primeiros
print(lista[-3:]) # Também é possível usar indíce negativo
print(lista[2:4]) # Mostrar os elementos em um intervalo

lista_1 = []

lista_1.append('zero')
lista_1.append('danilo')
lista_1.extend(['um', 'dois'])

# print(lista_1)
# print(lista_1 * 2)

for valor in lista_1:
    print(valor)

# meses = ['Janeiro', 'Fevereiro', 'Março', 'Abril', 'Maio', 'Junho', 'Julho', 'Agosto',
#          'Setembro', 'Outubro', 'Novembro', 'Dezembro']

# print("Enter with 13 to finish the program.\n")

# while(True):
#     mes = int(input("Choose a month between (1-12): "))
#     if 1 <= mes <= 12:
#         print('The month is {}'.format(meses[mes-1]))

#     if mes == 13:
#         break

# print("Thanks for using this program.\n")
