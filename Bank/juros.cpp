#include "juros.h"

Juros::Juros( const float& value ) : value_(value)

{}

void Juros::EmitirExtrato( void ) {

  std::cout << "Juros: " << this->value_*(0.1f) << std::endl;

}

void Juros::SetValor( const float& value ) {

  this->value_ = value;
}


