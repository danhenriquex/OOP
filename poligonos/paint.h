#ifndef PAINT_H
#define PAINT_H

#include "quadrado.h"
#include "retangulo.h"
#include <vector>
#include <iostream>

class Paint {
 public:
   int AreaTotal( void );
   int PerimetroTotal( void );
   void adiciona( const Quadrado& quad );
   void adiciona( const Retangulo& r ); 

 private:
   std::vector<Quadrado> quadrados_;
   std::vector<Retangulo> retangulos_;
};

#endif