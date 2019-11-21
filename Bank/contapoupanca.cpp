#include "contapoupanca.h"

ContaPoupanca::ContaPoupanca( void ) 

{}

ContaPoupanca::ContaPoupanca( const float& balance ) : saldo_(balance)

{}

void ContaPoupanca::EmitirExtrato( void ) {
  
  std::clog << "======================= Saldo ==========================" << std::endl;

  std::cout << "Saldo atual: " << this->saldo_ << std::endl;

  std::clog << "============ Depositos, Saques e Juros ============" << std::endl;

  for (auto& transacao : transacoes_) {

    transacao->EmitirExtrato();

  }

}

void ContaPoupanca::Depositar( const float& value ) {

  Deposito p;
  Juros j;
  
  p.SetValor( value );
  j.SetValor( value );

  Transacao* t1 = new Deposito( p );
  Transacao* t2 = new Juros( j );

  this->GuardaTransacao( t1 );
  this->GuardaTransacao( t2 );

  this->saldo_ += (value * 0.1f);  

}

void ContaPoupanca::Sacar( const float& value ) {

  Saque s;

  if (value <= this->saldo_) {

    s.SetValor( value );

    Transacao* t1 = new Saque( s );

    this->GuardaTransacao( t1 );
    
    this->saldo_ -= value;

  }else {

    std::clog << "====================================" << std::endl;
    std::clog << "\t Insuficiente" << std::endl;
    std::clog << "====================================" << std::endl;

  }
  
}

void ContaPoupanca::GuardaTransacao( Transacao* t ) {

  this->transacoes_.push_back( t );
}
