#include "cadastropessoa.h"

CadastroPessoa::CadastroPessoa( void )

{}

CadastroPessoa::~CadastroPessoa( void )

{}

void CadastroPessoa::ImprimeDados( void ) {

  system("clear");

  if (this->pessoas_.size() != 0) {

    std::clog << "==========================================" << std::endl;

    for (int i = 0; i < this->pessoas_.size(); ++i) {

      Pessoa& p = pessoas_[i];

      std::cout << "Nome: " << p.getNome() << std::endl;
      std::cout << "Idade: " << p.getIdade() << std::endl;
      std::cout << "Telefone: " << p.getTelefone() << std::endl;

      std::clog << "==========================================" << std::endl;
    }

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

  system("clear");

  if (this->pessoas_.size() != 0) {

    std::clog << "==========================================" << std::endl;    

    for (int i = 0; i < this->pessoas_.size(); ++i) {

      Pessoa& p = pessoas_[i];

      soma = soma + p.getIdade();

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
