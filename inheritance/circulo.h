#ifndef _CIRCULO_H_
#define _CIRCULO_H_

#include "poligono.h"

class Circulo : public Poligono {
 public:
   Circulo(float raio);
 
   float getRaio() const;
   float getArea() const;
   float getPerimetro() const;

 private:
   float raio_;
};

#endif // _CIRCULO_H_