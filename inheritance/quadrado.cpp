#include "quadrado.h"

Quadrado::Quadrado(float lado) : lado_(lado) {

}

float Quadrado::getLado() const {

  return this->lado_;
}

float Quadrado::getArea() const {

  return (this->lado_ * this->lado_);
}

float Quadrado::getPerimetro() const {

  return (4*this->lado_);
}