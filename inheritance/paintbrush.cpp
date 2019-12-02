#include "paintbrush.h"

float PaintBrush::CalculaAreaPoligonos( void ) {

  float area_total = 0;

  for (auto& area : poligonos_) {

    area_total += area->getArea();

  }

  return area_total;
}

float PaintBrush::CalculaPerimetro( void ) {

  float perimetro_total = 0;

  for (auto& perimetro : poligonos_) {

    perimetro_total += perimetro->getPerimetro();

  }

  return perimetro_total;
}

void PaintBrush::adiciona( Poligono* p ) {

  this->poligonos_.push_back( p );
}
