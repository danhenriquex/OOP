#ifndef JUROS_H
#define JUROS_H

#include <iostream>

#include "transacao.h"

class Juros : public Transacao {
 public:
   Juros( const float& value );

   void EmitirExtrato( void );

   void SetValor( const float& value );
   float GetValor( void ) const {return this->value_;}

  //  float GetSaldo( void );

 private:
   float value_ = 0;
};

#endif 
