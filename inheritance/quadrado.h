#ifndef _QUADRADO_H_
#define _QUADRADO_H_

#include "poligono.h"

class Quadrado : public Poligono {
 public:
   Quadrado( const float& lado );

   float getLado( void ) const;
   float getArea( void ) const;
   float getPerimetro( void ) const;

 private:
   float lado_;
};

#endif // _QUADRADO_H_