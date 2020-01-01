import pdb

def velocidade(espaco, tempo):
    if tempo != 0:
        v = float(espaco/tempo)
        print("Velocidade: {} m/s.\n".format(v))
        return v
    else:
        print("Impossivel calcular.\n")

resultado = velocidade(10, 50)

def dados(nome, idade = None):
    print("Nome: {}.".format(nome))
    
    if(idade is not None):
        print("Idade: {}.".format(idade))
        return ('nome: {} \nidade: {}'.format(nome, idade))
    else:
        print("Idade não informada.")
        return ('nome: {}'.format(nome))


dados('danilo', 21)

def calculadora(x, y): # O retorno é uma tupla
    return x+y, x-y

result = calculadora(10, 20)

print(result)

def calculator(x, y):
    return {'soma': x+y, 'subtração': x-y}

result1 = calculator(1, 2)

for key in result1:
    print('{}: {}'.format(key, result1[key]))


# *args e **kwargs

# A diferença é que o *args espera uma tupla de argumentos posicionais enquanto o **kwargs um
# dicionário com argumentos nomeados.

def teste(arg, *args):
    print("Primeiro argumento normal: {}".format(arg))
    for arg in args:
        print("Outro argumento: {}".format(arg))


teste('python', 'é', 'muito', 'legal')

lista = ['é', 'muito', 'legal']

teste('python', *lista)

def minha_funcao(**kwargs):
    for key, value in kwargs.items():
        print('{0} = {1}'.format(key, value))


# minha_funcao(nome = 'danilo')

dicionario = {'nome': 'danilo', 'idade': 21, 'cidade': 'joão pessoa'}

minha_funcao(**dicionario)




