#ifndef DEPOSITO_H
#define DEPOSITO_H

#include <iostream>

#include "transacao.h"

class Deposito : public Transacao {
 public:

   void EmitirExtrato( void );
   
   void SetValor( const float& value );
   float GetValor( void ) const {return this->value_;};
  //  float GetSaldo( void );

 private:
   float value_ = 0;
};

#endif