import pdb
import datetime

# numero = '4996-4'
# titular = 'Danilo'
# saldo = 500.00
# limite = 1100

# conta = {'numero': '4996-4', 'titular': 'Danilo', 'saldo': 500.00, 'limite': 1100}

# print(conta['numero'])
# print(conta['titular'])

def criar_conta(numero, titular, saldo, limite):
    conta = {'numero': numero, 'titular': titular, 'saldo': saldo, 'limite': limite}
    return conta

# pessoa1 = criar_conta('1995-4', 'João', 200.00, 1000.00)
# pessoa2 = criar_conta('4996-4', 'Danilo', 12000.00, 5000.00) 

# print(pessoa1['titular'])
# print(pessoa1['numero'])

# def deposita(conta, valor):
#     conta['saldo'] += valor

# def sacar(conta, valor):
#     conta['saldo'] -= valor

# def extrato(conta):
#     print("Titular: {} \nNumero: {} \nsaldo: {}".format(conta['titular'], conta['numero'], conta['saldo']))


# extrato(pessoa2)
# print("\n----------------------------\n")
# extrato(pessoa1)


# Definições e Declarações através de Classes e Objetos.

# Ao criar uma Conta , estamos pedindo para o Python criar uma nova instância de Conta na
# memória, ou seja, o Python alocará memória suficiente para guardar todas as informações da Conta
# dentro da memória do programa. O __new__() , portanto, devolve uma referência, uma seta que
# aponta para o objeto em memória e é guardada na variável conta .

class Cliente:
    def __init__(self, nome, sobrenome, cpf):
        self.nome = nome
        self.sobrenome = sobrenome
        self.cpf = cpf

class Historico:
    def __init__(self):
        self.data_abertura = datetime.datetime.today()
        self.transacoes = []

    def imprime(self):
        print("Data de abertura: {}".format(self.data_abertura))
        print("Transações: ")
        for t in self.transacoes:
            print("-", t)

# Quando a existência de uma classe depende de outra classe, como é a relação da classe Histórico com
# a classe Conta, dizemos que a classe Historico compõe a classe Conta . Esta associação chamamos
# Composição.

class Conta:
    def __init__(self, numero, Cliente, saldo, limite):
        self.numero = numero
        self.titular = Cliente
        self.saldo = saldo
        self.limite = limite
        self.historico = Historico()

    def depositar(self, valor):
        self.saldo += valor
        self.historico.transacoes.append("depósito de {}".format(valor))

    def sacar(self, valor):
        self.saldo -= valor

    def saque_positivo(self, valor):
        if self.saldo < valor:
            return False;
        else:
            self.saldo -= valor
            self.historico.transacoes.append("Saque de {}".format(valor))
            return True

    def transfere(self, destino, valor):
        if self.saque_positivo(valor) == False:
            return False
        else:
            destino.depositar(valor)
            self.historico.transacoes.append("Transfência de {} para conta {}".format(valor, destino.numero))
            return True

    def extrato(self):
        print("Titular: {}, Saldo: {}".format(self.titular, self.saldo))
        self.historico.transacoes.append("tirou extrato - saldo de {}".format(self.saldo))


dan = Cliente('Danilo', 'Henrique', '074.525.234-66')

conta_dan = Conta('4996-4', dan, 2500.0, 3000.0)

conta_dan.depositar(100)
conta_dan.saque_positivo(50)
conta_dan.depositar(25)
conta_dan.extrato()

conta_dan.historico.imprime()

print("Titular: {}".format(conta_dan.titular.nome))

# conta = Conta('4996-4', 'Danilo', 2500.0, 5000.0)

# conta1 = Conta('3445-6', 'Daniel', 3200.0, 5000.0)

# conta.extrato()

# conta.extrato()

# conta.depositar(100)

# conta.extrato()

# consegui = conta.saque_positivo(1100)

# conta.extrato()
# print("----------")
# conta1.extrato()

# transferencia = conta.transfere(conta1, 200)

# if transferencia:
#     print("Realizado.")
# else:
#     print("Não foi possível realizar.")

# if consegui:
#     print("Realizado.\n")
# else:
#     print("Insuficiente.\n")
























