import pdb
import abc

class Cliente:
    def __init__(self, nome, idade):
        self._nome = nome
        self._idade = idade

class Funcionario(abc.ABC):
    def __init__(self, nome, cpf, salario):
        self._nome = nome
        self._cpf = cpf
        self._salario = salario

    @abc.abstractmethod
    def get_bonificacao(self):
        pass

class Gerente(Funcionario):
    def __init__(self, nome, cpf, salario, senha, qtd_funcionarios):
        super().__init__(nome, cpf, salario)
        self._senha = senha
        self._funcionarios = qtd_funcionarios

    def autentica(self, senha):
        if self._senha == senha:
            print("Acesso permitido.")
            return True
        else:
            print("Acesso negado.")
            return False

    def get_bonificacao(self):
        return self._salario + 1000

class ControleDeBonificacoes:
    def __init__(self, total_bonificacoes = 0):
        self._total_bonificacoes = total_bonificacoes

    def registra(self, obj):
        if hasattr(obj, 'get_bonificacao'):
            self._total_bonificacoes += obj.get_bonificacao()
        else:
            print("Não foi possível fazer.")

    @property
    def total_bonificacoes(self):
        return self._total_bonificacoes

# Essa invocação vai procurar o método com o nome get_bonificacao() de uma superclasse de
# Gerente. No caso, ele logo vai encontrar esse método em Funcionario .

# Essa é uma prática comum, pois em muitos casos o método reescrito geralmente faz algo a mais que
# o método da classe mãe. Chamar ou não o método de cima é uma decisão e depende do seu problema.

# Polimorfismo é a capacidade de um objeto poder ser referenciado de várias formas. (cuidado,
# polimorfismo não quer dizer que o objeto fica se transformando, muito pelo contrário, um objeto nasce
# de um tipo e morre daquele tipo, o que pode mudar é a maneira como nos referimos a ele).

Cliente = Cliente('Danilo', 21)
gerente = Gerente('Danilo', '034.555.294-88', 5000.0, 8885, 0)
# Funcionario = Funcionario('Daniel', '074.525.214-12', 2000.0)

# print("Bonificação do Gerente: {}".format(gerente.get_bonificacao()))
# print("Bonificação do Funcionário: {}".format(Funcionario.get_bonificacao()))

controle = ControleDeBonificacoes()
# controle.registra(Funcionario)
controle.registra(gerente)
controle.registra(Cliente)

print("Total: {}".format(controle.total_bonificacoes))















        



        
