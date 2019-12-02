#ifndef _RETANGULO_H_
#define _RETANGULO_H_

#include "poligono.h"

class Retangulo : public Poligono {
 public:
   Retangulo(float altura, float base);

   float getArea() const;
   float getPerimetro() const;

 private:
   float altura_ = 0;
   float base_ = 0; 
};

#endif // _RETANGULO_H_