#include "loja.h"

Loja::Loja( void ) 
  
{}

void Loja::MostrarVenda( void ) {

  for (unsigned int i = 0; i < this->vendas_.size(); ++i) {

    Venda* v = this->vendas_[i];

    std::cout << "Nome: " << v->c_.getName() << std::endl;
    std::cout << "ID: " << v->r_.getCod() << std::endl;
    
  }

}

void Loja::MostraClientes( void ) {

  for (auto const& cliente : clientes_) {

    std::clog << "=============== Clientes ===============" << std::endl;
    std::cout << "Nome: " << cliente.getName() << std::endl;
    std::clog << "========================================" << std::endl;

  }

  if (this->clientes_.empty()) {

    std::clog << "=============== Sem Cadastro ================" << std::endl;
    std::clog << "\t Nao ha clientes cadastrados" << std::endl;
    std::clog << "=============================================" << std::endl;

  }

}

void Loja::CadastraVenda( Estoque& e, const std::string& nome, const int& id, const int& qnt_venda ) {

  Cliente* c = this->getCliente( nome );
  Roupa* r = e.getRoupa( id );

  if (c != NULL && r != NULL) {

    if (qnt_venda <= r->getQnt() && id == r->getCod()) {

      int qnt_atual = r->getQnt() - qnt_venda;
      
      r->setQnt( qnt_atual );

      Venda* v = new Venda( c, r );

      this->GuardaVenda( v );
      
      std::clog << "=========================================" << std::endl;
      std::clog << "\t Compra feita." << std::endl;
      std::clog << "=========================================" << std::endl;

    }else {

      std::clog << "=================================================" << std::endl;
      std::clog << "\t Quantidade indisponivel" << std::endl;  
      std::clog << "=================================================" << std::endl;

    }  

  }

}

void Loja::ClienteRoupa( const std::string& cliente ) {

  std::clog << "============================================" << std::endl;
  std::cout << "Cliente: " << cliente << std::endl;

  for (unsigned int i = 0; i < this->vendas_.size(); ++i) {

    Venda* v = vendas_[i];

    if (v->c_.getName() == cliente) {

      std::clog << "===== Roupas compradas =====" << std::endl;
      std::cout << "ID: " << v->r_.getCod() << " ";
      printf("\n"); 

    }

  }

  if (this->vendas_.empty()) {

    std::clog << "===========================================" << std::endl;
    std::clog << "\t Sem registro de vendas" << std::endl;  
    std::clog << "===========================================" << std::endl;

  }
  
}

void Loja::RoupaCliente( const int& id ) {

  std::clog << "===========================================" << std::endl;
  std::cout << "\t ID da roupa: " << id << std::endl;

  for (unsigned int i = 0; i < this->vendas_.size(); ++i) {

    Venda* v = vendas_[i];

    if (v->r_.getCod() == id) {
      
      std::clog << "========= Clientes que compraram ==========" << std::endl;
      std::cout << "Nome: " << v->c_.getName() << std::endl;

    }

  }

  if (this->vendas_.empty()) {

    std::clog << "===========================================" << std::endl;
    std::clog << "\t Sem registro de vendas" << std::endl;  
    std::clog << "===========================================" << std::endl;

  }

}

Cliente* Loja::getCliente( const std::string& nome ) {

  for (unsigned int i = 0; i < this->clientes_.size(); ++i) {

    Cliente& c = clientes_[i];

    if (nome == c.getName())
      return &c;

  }
  
  std::clog << "=============== Sem Cadastro ================" << std::endl;
  std::clog << "\t Cliente nao cadastrado no sistema." << std::endl;
  std::clog << "=============================================" << std::endl;

  return NULL;
}

void Loja::GuardaVenda( class Venda* v ) {

  this->vendas_.push_back( v );
}

void Loja::GuardaCliente( const Cliente& c ) {

  this->clientes_.push_back( c );
}


