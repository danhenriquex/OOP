#include "paint.h"

int Paint::AreaTotal( void ) {

  int area_total = 0;

  for (int i = 0; i < this->quadrados_.size(); ++i) {

    Quadrado& q = quadrados_[i];
    area_total += q.Area();

  }

  for (int i = 0; i < this->retangulos_.size(); ++i) {

    Retangulo& r = retangulos_[i];
    area_total += r.Area();

  }

  return area_total;
}

int Paint::PerimetroTotal( void ) {

  int perimetro_total = 0;

  for (int i = 0; i < this->quadrados_.size(); ++i) {

    Quadrado& q = quadrados_[i];
    perimetro_total += q.Perimetro();

  }

  for (int i = 0; i < this->retangulos_.size(); ++i) {

    Retangulo& r = retangulos_[i];
    perimetro_total += r.Perimetro();

  }

  return perimetro_total; 
}

void Paint::adiciona( const Quadrado& quad ) {

  this->quadrados_.push_back( quad );
}

void Paint::adiciona( const Retangulo& ret ) {

  this->retangulos_.push_back( ret );
}

