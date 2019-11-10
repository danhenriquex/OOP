#include "cadastropessoa.h"

int main( void ) {

  CadastroPessoa cp;
  Pessoa p;

  int qnt_pessoas;
  int idade;
  std::string nome;
  std::string telefone;

  std::cout << "Digite a quantidade de pessoas para cadastrar: ";
  std::cin >> qnt_pessoas;

  for (int i = 0; i < qnt_pessoas; ++i) {
    
    system("clear");

    std::cout << "Digite o nome: ";
    std::cin >> nome;
    std::cout << "Digite a idade: ";
    std::cin >> idade;
    std::cout << "Digite o telefone: ";
    std::cin >> telefone;

    p = Pessoa( nome, idade, telefone );

    cp.GuardaPessoas ( p );

  }

  system("clear");

  while (!false) {

    std::cout << "1.Imprime dados." << std::endl;
    std::cout << "2. Imprime a media das idades: " << std::endl;
    std::cout << "3. Exit." << std::endl;

    int op;
    std::cin >> op;

    switch (op) {

      case 1:
        system("clear");
        cp.ImprimeDados();
        break;
    
      case 2:
        system("clear");
        cp.ImprimeMediaIdade();
        break;

      case 3:
        return -1;

    }

  }

  return 0;
}