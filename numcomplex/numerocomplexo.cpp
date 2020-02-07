#include "numerocomplexo.h"

NumeroComplexo::NumeroComplexo( void )

{}

NumeroComplexo::NumeroComplexo( const int& real, const int& imag )
    : real_(real), imag_(imag)

{}

NumeroComplexo NumeroComplexo::operator+( NumeroComplexo& nc ) {

  NumeroComplexo aux;

  aux.real_ = this->real_ + nc.real_;
  aux.imag_ = this->imag_ + nc.imag_;

  return aux;
}

NumeroComplexo NumeroComplexo::operator-( NumeroComplexo& nc ) {

  NumeroComplexo aux;

  aux.real_ = this->real_ - nc.real_;
  aux.imag_ = this->imag_ - nc.imag_;

  return aux;
}

NumeroComplexo NumeroComplexo::operator*( NumeroComplexo& nc ) {

  NumeroComplexo aux;

  aux.real_ = (this->real_ * nc.real_ - this->imag_ * nc.imag_);
  aux.imag_ = (this->real_ * nc.imag_ + this->imag_ * nc.real_);

  return aux;
}

NumeroComplexo NumeroComplexo::operator/( NumeroComplexo& nc ) {

  NumeroComplexo aux;   

  int divisor = (pow(nc.real_, 2) + pow(nc.imag_, 2));

  aux.real_ = (this->real_ * nc.real_ - this->imag_ * -nc.imag_);
  aux.imag_ = (-this->real_ * nc.imag_ + this->imag_ * nc.real_);

  return aux;
}

std::ostream& operator<<( std::ostream& os, NumeroComplexo& nc ) {

  os << " " << nc.getReal() << "+" << nc.getImag() << "i" << std::endl;	

}
