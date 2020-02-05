#include "numerocomplexo.h"

int main( void ) {

  NumeroComplexo c1( 5, 8 );
  NumeroComplexo c2( 1, 2 ); 
  
  NumeroComplexo c3 = c1 + c2;

  std::cout << " " << c3.getReal() << "+" << c3.getImag() << "i" << std::endl;

  return 0;
}