#ifndef _QUADRADO_H_
#define _QUADRADO_H_

#include "poligono.h"

class Quadrado : public Poligono {
 public:
   Quadrado(float lado);

   float getLado() const;
   float getArea() const;
   float getPerimetro() const;

 private:
   float lado_;
};

#endif // _QUADRADO_H_