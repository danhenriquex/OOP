#include "paint.h"

int Paint::AreaTotal( void ) {

  int area_total = 0;

  for (auto& quadrado : quadrados_) {

    area_total += quadrado.Area();

  }

  for (auto& retangulo : retangulos_) {

    area_total += retangulo.Area();

  }

  return area_total;
}

int Paint::PerimetroTotal( void ) {

  int perimetro_total = 0;

   for (auto& quadrado : quadrados_) {

    perimetro_total += quadrado.Perimetro();

  }

  for (auto& retangulo : retangulos_) {

    perimetro_total += retangulo.Perimetro();

  }

  return perimetro_total; 
}

void Paint::adiciona( const Quadrado& quad ) {

  this->quadrados_.push_back( quad );
}

void Paint::adiciona( const Retangulo& ret ) {

  this->retangulos_.push_back( ret );
}

