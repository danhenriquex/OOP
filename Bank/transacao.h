#ifndef TRANSACAO_H
#define TRANSACAO_H

#include <iostream>

class Transacao {
 public:
   virtual void EmitirExtrato( void ) = 0;
};

#endif