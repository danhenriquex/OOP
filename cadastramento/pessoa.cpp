#include "pessoa.h"

Pessoa::Pessoa( void )

{}

Pessoa::Pessoa( const std::string& nome, const int& idade, const std::string& telefone )
    : nome_(nome), idade_(idade), telefone_(telefone)

{}

Pessoa::~Pessoa( void )

{}

void Pessoa::setNome( const std::string& novo_nome) {

  this->nome_ = novo_nome;
}

void Pessoa::setIdade( const int& nova_idade ) {

  this->idade_ = nova_idade;
}

void Pessoa::setTelefone( const std::string& novo_telefone ) {

  this->telefone_ = novo_telefone;
}
