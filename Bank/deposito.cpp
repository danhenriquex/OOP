#include "deposito.h"

Deposito::Deposito( const float& value ) : value_(value) 

{}

void Deposito::EmitirExtrato( void ) {

  std::cout << "Deposito: +" << this->value_ << std::endl; 

}

void Deposito::SetValor( const float& value ) {

  this->value_ = value;
}


