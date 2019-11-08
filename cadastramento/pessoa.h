#pragma once

#include <iostream>
#include <string>
#include <vector>

class Pessoa {
 public:
   Pessoa( void );
   Pessoa( const std::string& nome, const int& idade, const std::string& telefone );
   ~Pessoa( void );

   void setNome( const std::string& novo_nome );
   void setIdade( const int& nova_idade );
   void setTelefone ( const std::string& novo_telefone );
   
   std::string getNome ( void ) const {return this->nome_;}
   int getIdade( void ) const {return this->idade_;}
   std::string getTelefone ( void ) const {return this->telefone_;}

 private:
   std::string nome_;
   int idade_;
   std::string telefone_;
};
