#ifndef _POLIGONO_H_
#define _POLIGONO_H_

#include <cmath>
#include <iostream>
#include <vector>

class Poligono {
 public:
   virtual ~Poligono( void ) {}

   virtual float getArea( void ) const = 0;
   virtual float getPerimetro( void ) const = 0;

 protected:
  float area_ = 0;
  float perimetro_ = 0;
};

#endif // _POLIGONO_H_
