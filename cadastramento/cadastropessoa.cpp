#include "cadastropessoa.h"

CadastroPessoa::CadastroPessoa( void )

{}

CadastroPessoa::~CadastroPessoa( void )

{}

void CadastroPessoa::ImprimeDados( void ) {

  if (this->pessoas_.size() != 0) {

    std::clog << "==========================================\n" << std::endl;

    for (auto pessoa: pessoas_) {

      std::clog << "Nome: " << pessoa.getNome() << std::endl;
      std::clog << "Idade: " << pessoa.getIdade() << std::endl;
      std::clog << "Telefone: " << pessoa.getTelefone() << std::endl;
      printf("\n");

    }
    
    std::clog << "==========================================" << std::endl;

  }else {

    system("clear");
    
    std::clog << "==========================================" << std::endl;
    std::cout << "Nao existe pessoas cadastradas." << std::endl;
    std::clog << "==========================================" << std::endl;

  }

}

void CadastroPessoa::ImprimeMediaIdade( void ) {

  float media = 0;
  float soma = 0;

  if (this->pessoas_.size() != 0) {

    std::clog << "==========================================" << std::endl;    

    for (auto pessoa : pessoas_) {

      soma += pessoa.getIdade();

    }

    media = soma / this->pessoas_.size(); 

    std::cout << "A media das pessoas cadastradas eh: " << media << std::endl;

    std::clog << "==========================================" << std::endl; 

  }else {

    std::clog << "==========================================" << std::endl;
    std::cout << "Nao existe pessoas cadastradas." << std::endl;
    std::clog << "==========================================" << std::endl;

  }

}

void CadastroPessoa::GuardaPessoas( const Pessoa& p ) {

  this->pessoas_.push_back( p );
}
