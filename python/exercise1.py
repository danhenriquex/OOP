import pdb
import datetime
import abc

class Pessoa:
    def __init__(self, nome, idade, telefone):
        self._nome = nome
        self._idade = idade
        self._telefone = telefone

    @property
    def get_nome(self):
        return self._nome

    @property
    def get_idade(self):
        return self._idade

    @property
    def get_telefone(self):
        return self._telefone

    def set_nome(self, nome):
        self._nome = nome

    def set_idade(self, idade):
        self._idade = idade

    def set_telefone(self, telefone):
        self._telefone = telefone

class CadastrodePessoa():
    _pessoas = []
    _soma = 0
    _qnt_pessoas = 0

    def mostrar_pessoas(self):
        for pessoa in self._pessoas:
            print("Nome: {}, idade: {}, telefone: {}".format(pessoa._nome, pessoa._idade, pessoa._telefone))

    def media_idades(self):
        for media in self._pessoas:
            self._soma += media._idade 

        media = self._soma / self._qnt_pessoas

        return media

    def guarda_pessoas(self, Pessoa):
        self._pessoas.append(Pessoa)
        self._qnt_pessoas += 1


cadastro = CadastrodePessoa()

size = input("Quantas pessoas você deseja cadastrar? ")

for i in range(size):
    nome = input("Digite seu nome: ")
    idade = int(input("Digite sua idade: "))
    telefone = input("Digite seu telefone: ")

    pessoa = Pessoa(nome, idade, telefone)

    cadastro.guarda_pessoas(pessoa)


cadastro.mostrar_pessoas()

print("A média das idades é: {}".format(cadastro.media_idades()))



# print("Seu nome é: {}, sua idade é: {} e seu telefone é: {}".format(pessoa._nome, pessoa._idade, pessoa._telefone))
        
        