import pdb
import datetime

class Cliente:
    def __init__(self, nome, sobrenome, cpf):
        self.__nome = nome
        self.__sobrenome = sobrenome
        self.__cpf = cpf

    def get_nome(self):
        return self.__nome

class Historico:
    def __init__(self):
        self.__data_abertura = datetime.datetime.today()
        self.transacoes = []

    def imprime(self):
        print("Data de abertura: {}".format(self.__data_abertura))
        print("Transações: ")
        for t in self.transacoes:
            print("-", t)

# Quando a existência de uma classe depende de outra classe, como é a relação da classe Histórico com
# a classe Conta, dizemos que a classe Historico compõe a classe Conta . Esta associação chamamos
# Composição.

# Um atributo com apenas um underscore é chamados de protegido, mas quando usado sinaliza que
# deve ser tratado como um atributo "privado" e acessá-lo diretamente pode ser perigoso.

class Conta:
    
    _total_contas = 0

    def __init__(self, numero, Cliente, saldo, limite):
        self.__numero = numero
        self.__titular = Cliente
        self.__saldo = saldo
        self.__limite = limite
        self.historico = Historico()
        Conta._total_contas += 1

    @staticmethod # Não precisa do self quando o método for statico
    def get_total_contas():
        return Conta._total_contas

    def depositar(self, valor):
        self.__saldo += valor
        self.historico.transacoes.append("depósito de {}".format(valor))

    def sacar(self, valor):
        self.__saldo -= valor

    def saque_positivo(self, valor):
        if self.__saldo < valor:
            return False;
        else:
            self.__saldo -= valor
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
        print("Titular: {}, Saldo: {}".format(self.__titular._Cliente__nome, self.__saldo))
        self.historico.transacoes.append("tirou extrato - saldo de {}".format(self.__saldo))

    @property
    def saldo(self):
        return self.__saldo

    @saldo.setter
    def saldo(self, saldo):
        if self.__saldo < 0:
            print("Saldo não pode ser negativo.")
        else:
            self.__saldo = saldo
    
    def get_titular(self):
        return self.__titular

    def get_limite(self):
        return self.__limite

# Um decorador, ou decorator é um padrão de projeto de software que permite adicionar um
# comportamento a um objeto já existente em tempo de execução, ou seja, agrega dinamicamente
# responsabilidades adicionais a um objeto.


dan = Cliente('Danilo', 'Henrique', '074.525.234-66')
nilo = Cliente('Daniel', 'Filipe', '074.525.214-12')

conta_dan = Conta('4996-4', dan, 2500.0, 3000.0)
conta_nilo = Conta('3889-4', nilo, 3500.0, 5000.0)

conta_dan.depositar(100)
conta_dan.saque_positivo(50)
conta_dan.depositar(25)
conta_dan.extrato()

conta_dan.historico.imprime()

# Métodos estáticos não precisam de uma referência, não recebem um primeiro argumento especial
# (self).

print("Saldo: {}".format(conta_dan.saldo))
print("Quantidade de contas: {}".format(Conta.get_total_contas()))

# Encapsulamento

# O conjunto de métodos públicos de uma classe é também chamado de interface da classe,
# pois esta é a única maneira a qual você se comunica com objetos dessa classe.

# É uma má prática criar uma classe e, logo em seguida, criar as propriedades para todos seus
# atributos. Você só deve criar properties se tiver real necessidade.

# Método de classe

# Métodos estáticos não devem ser confundidos com métodos de classe. Como os métodos estáticos,
# métodos de classe não são ligados às instâncias, mas sim a classe. O primeiro parâmetro de um método
# de classe é uma referência para a classe, isto é, um objeto do tipo class que por convenção nomeamos
# como 'cls'. Eles podem ser chamados via instância ou pela classe e utilizam um outro decorar, o
# @classmethod:

# Métodos de classe servem para definir um método que opera na classe, e não em instâncias. Já os
# métodos estáticos utilizamos quando não precisamos receber a referência de um objeto especial (seja da
# classe ou de uma instância) e funciona como uma função comum, sem relação

# Um método de classe pode mudar a implementação, ou seja, pode
# ser reescrito pela classe filha. Já os métodos estáticos não podem ser reescritos pelas filhas, já que são
# imutáveis e não dependem de um referência especial.
