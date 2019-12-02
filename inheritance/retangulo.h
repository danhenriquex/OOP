#ifndef _RETANGULO_H_
#define _RETANGULO_H_

#include "poligono.h"

class Retangulo : public Poligono {
 public:
   Retangulo( const float& altura, const float& base );

   float getArea( void ) const;
   float getPerimetro( void ) const;

 private:
   float altura_;
   float base_; 
};

#endif // _RETANGULO_H_