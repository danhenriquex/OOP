#include "retangulo.h"

Retangulo::Retangulo(float altura, float base)
    : altura_(altura), base_(base) {

}

float Retangulo::getArea() const {

  return (this->base_ * this->altura_);
}

float Retangulo::getPerimetro() const {

  return 2*(this->base_ * this->altura_);
}
