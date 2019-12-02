#include "quadrado.h"

Quadrado::Quadrado( const float& lado)  : lado_(lado)

{}

float Quadrado::getLado( void ) const {

  return this->lado_;
}

float Quadrado::getArea( void ) const {

  return (this->lado_ * this->lado_);
}

float Quadrado::getPerimetro( void ) const {

  return (4*this->lado_);
}