#ifndef _CIRCULO_H_
#define _CIRCULO_H_

#include "poligono.h"

class Circulo : public Poligono {
 public:
   Circulo( const float& raio );
 
   float getRaio( void ) const;
   float getArea( void ) const;
   float getPerimetro( void ) const;

 private:
   float raio_;
};

#endif // _CIRCULO_H_