#include "retangulo.h"

Retangulo::Retangulo( void )

{}

Retangulo::Retangulo( const int& altura, const int& largura )
    : altura_(altura), largura_(largura)

{}

int Retangulo::Area( void ) {

  return (altura_ * largura_);
}

int Retangulo::Perimetro( void ) {

  return 2 * (altura_ + largura_);
}