#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include <vector>

#include "saque.h"
#include "deposito.h"
#include "juros.h"
#include "transacao.h"

class ContaPoupanca {
 public:
   ContaPoupanca( void );
   ContaPoupanca( const float& balance );

   void EmitirExtrato( void );
   void Depositar( const float& value );
   void Sacar( const float& value );

   void GuardaTransacao( Transacao* t );

   float GetSaldo( void ) {return this->saldo_;}

 private:
   float saldo_ = 0;
   std::vector<Transacao*> transacoes_;
};

#endif