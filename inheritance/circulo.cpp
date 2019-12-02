#include "circulo.h"

Circulo::Circulo(float raio) : raio_(raio) {

}

float Circulo::getRaio() const {

  return this->raio_;
}

float Circulo::getArea() const {

  return (M_PI * pow(this->raio_, 2));
}

float Circulo::getPerimetro() const {

  return ((2 * M_PI) * this->raio_);
}