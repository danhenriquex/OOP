#include "saque.h"

Saque::Saque( const float& value ) : value_(-value)

{}

void Saque::EmitirExtrato( void ) {

  std::cout << "Saque: " << this->value_ << std::endl;

}

void Saque::SetValor( const float& value ) {

  this->value_ = -value;
}
