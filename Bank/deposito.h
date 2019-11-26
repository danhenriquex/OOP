#ifndef DEPOSITO_H
#define DEPOSITO_H

#include <iostream>

#include "transacao.h"

class Deposito : public Transacao {
 public:
   Deposito( const float& value );

   void EmitirExtrato( void );
   
   void SetValor( const float& value );
   
  //  float GetSaldo( void );

 private:
   float value_ = 0;
};

#endif