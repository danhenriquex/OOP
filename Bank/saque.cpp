#include "saque.h"

Saque::Saque( void ) : value_(0)

{}

void Saque::EmitirExtrato( void ) {

  std::cout << "Ultimo valor sacado: " << this->value_ << std::endl;

}

void Saque::SetValor( const float& value ) {

  this->value_ = -value;
}
