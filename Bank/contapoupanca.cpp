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

  Transacao* t1 = new Deposito( value );
  Transacao* t2 = new Juros( value );

  this->GuardaTransacao( t1 );
  this->GuardaTransacao( t2 );

  float juros = (value * 0.1f); // Ajeitar o getSaldo()

  this->saldo_  += + (value - juros);  

}

void ContaPoupanca::Sacar( const float& value ) {

  if (value <= this->saldo_) {

    Transacao* t1 = new Saque( value );

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
