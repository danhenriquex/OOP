#ifndef _POLIGONO_H_
#define _POLIGONO_H_

#include <cmath>
#include <iostream>
#include <vector>
#include <memory>

class Poligono {
 public:
   virtual ~Poligono() {}

   virtual float getArea() const = 0;
   virtual float getPerimetro() const = 0;

  //  typedef std::unique_ptr< Poligono > PoligonoUnique;

 protected:
  float area_ = 0;
  float perimetro_ = 0;
};

#endif // _POLIGONO_H_