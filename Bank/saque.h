#ifndef SAQUE_H
#define SAQUE_H

#include <iostream>

#include "transacao.h"

class Saque : public Transacao {
 public:
   Saque( void );

   void EmitirExtrato( void );
   
   void SetValor( const float& value );
   float GetValor( void ) const {return this->value_;}

  //  float GetSaldo( void );

 private:
   float value_ = 0;
};

#endif