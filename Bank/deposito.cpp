#include "deposito.h"

void Deposito::EmitirExtrato( void ) {

  std::cout << "Ultimo deposito realizado: " << this->value_ << std::endl; 

}

void Deposito::SetValor( const float& value ) {

  this->value_ = value;
}


