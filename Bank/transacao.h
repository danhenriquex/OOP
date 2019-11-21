#ifndef TRANSACAO_H
#define TRANSACAO_H

#include <iostream>

class Transacao {
 public:
   virtual float GetSaldo( void );
   virtual void EmitirExtrato( void );
};

#endif