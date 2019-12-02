#include "circulo.h"

Circulo::Circulo( const float& raio ) : raio_(raio) 

{}

float Circulo::getRaio( void ) const {

  return this->raio_;
}

float Circulo::getArea( void ) const {

  return (M_PI * pow(this->raio_, 2));
}

float Circulo::getPerimetro( void ) const {

  return ((2 * M_PI) * this->raio_);
}