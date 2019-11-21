#include "juros.h"

void Juros::EmitirExtrato( void ) {

  std::cout << "Juros em relacao ao ultimo deposito: " << this->value_*(0.1f) << std::endl;

}

void Juros::SetValor( const float& value ) {

  this->value_ = value;
}


