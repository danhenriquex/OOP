#ifndef NUMEROCOMPLEXO_H
#define NUMEROCOMPLEXO_H

#include <iostream>
#include <cstdlib>
#include <math.h>

class NumeroComplexo {
 public:
   NumeroComplexo( void );
   NumeroComplexo( const int& real, const int& imag );

   NumeroComplexo operator+( NumeroComplexo& nc );
   NumeroComplexo operator-( NumeroComplexo& nc );
   NumeroComplexo operator*( NumeroComplexo& nc );
   NumeroComplexo operator/( NumeroComplexo& nc );
   
   friend std::ostream& operator<<( std::ostream& os, NumeroComplexo& valor );
   
   void setReal( const float& real ) {this->real_ = real;};
   void setImag( const float& imag ) {this->imag_ = imag;};
   float getReal( void ) const {return this->real_;}
   float getImag( void ) const {return this->imag_;}

 private:
   float real_ = 0;
   float imag_ = 0;
};

#endif
