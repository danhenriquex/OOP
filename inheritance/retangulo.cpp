#include "retangulo.h"

Retangulo::Retangulo( const float& altura, const float& base )
    : altura_(altura), base_(base) 

{}

float Retangulo::getArea( void ) const {

  return (this->base_ * this->altura_);
}

float Retangulo::getPerimetro( void ) const {

  return 2*(this->base_ * this->altura_);
}
