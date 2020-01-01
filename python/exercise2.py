import pdb
import abc

class Transacao(abc.ABC):
    @abc.abstractmethod
    def emitir_extrato(self):
        pass

class Saque(Transacao):
    def __init__(self, valor):
        self._valor = valor

    def emitir_extrato(self):
        print("Saque: -{}".format(self._valor))
        

class Deposito(Transacao):
    def __init__(self, valor):
        self._valor = valor

    def emitir_extrato(self):
        print("Déposito: +{}".format(self._valor))

class Juros(Transacao):
    def __init__(self, valor):
        self._valor = valor * 0.1

    def emitir_extrato(self):
        print("Juros: +{}".format(self._valor))

class ContaPoupanca:
    _transacoes = []

    def __init__(self, saldo):
        self._saldo = saldo

    @property
    def get_saldo(self):
        return self._saldo

    def guarda_transacao(self, transacao):
        self._transacoes.append(transacao)

    def emitir_extrato(self):
        for t in self._transacoes:
            t.emitir_extrato()
        
        print("========================")
        print("Saldo: {}".format(self._saldo))
        print("========================")

    def depositar(self, valor):
        deposito = Deposito(valor)
        juros = Juros(valor)

        self.guarda_transacao(deposito)
        self.guarda_transacao(juros)

        result = (valor * 0.1)

        self._saldo += + (valor + result)

    def sacar(self, valor):
        if(valor <= self._saldo):
            saque = Saque(valor)
            self.guarda_transacao(saque)
            self._saldo -= valor
        else:
            print("Insuficiente.")

conta = ContaPoupanca(2000)

conta.depositar(100)

conta.sacar(200)

conta.depositar(500)

conta.depositar(100)

conta.sacar(300)

conta.emitir_extrato()








