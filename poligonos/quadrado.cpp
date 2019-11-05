#include "quadrado.h"

Quadrado::Quadrado( void ) 

{}

Quadrado::Quadrado( const int& lado ) 
    : lado_(lado)

{}

int Quadrado::Area( void ) {

  return (lado_ * lado_);
}

int Quadrado::Perimetro( void ) {

  return (4 * lado_);
}