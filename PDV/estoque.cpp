#include "estoque.h"

void Estoque::GuardaRoupas(const Roupa& roupa) {

  this->roupas_.push_back( roupa );
}

Roupa* Estoque::getRoupa( const int& id ) {

  for (unsigned int i = 0; i < this->roupas_.size(); ++i) {

    Roupa& r = roupas_[i];

    if (id == r.getCod())
      return &r;

  }

  std::clog << "============================================= " << std::endl;
  std::clog << "\t Roupa nao cadastrada no sistema" << std::endl;  
  std::clog << "============================================= " << std::endl;

  return NULL;
}

void Estoque::Exemplares( const int& id ) {

  if (this->roupas_.size() != 0) {

    for (unsigned int i = 0; i < this->roupas_.size(); ++i) {

      Roupa& r = roupas_[i];

      if (r.getCod() == id) {

        std::clog << "========= Exemplares ==========" << std::endl;
        std::clog << "ID: " << r.getCod() << " " << "Quantidade: " << r.getQnt() << std::endl;
        std::clog << "===============================" << std::endl; 

      }

    }

  }else {

    std::clog << "=============== Sem Exemplares ==============" << std::endl;
    std::clog << "\t Produtos em falta" << std::endl;
    std::clog << "=============================================" << std::endl;


  }
}

void Estoque::MostraRoupas( void ) {

  for (auto const& roupa : roupas_) {

    std::clog << "================ Roupas =================== " << std::endl;
    std::cout << "ID: " << roupa.getCod() << std::endl;
    std::cout << "Tamanho: " << roupa.getTam() << std::endl;
    std::cout << "Exemplares: " << roupa.getQnt() << std::endl;
    std::clog << "===========================================" << std::endl;

  }

  if (this->roupas_.size() == 0) {

    std::clog << "=============== Sem Cadastro ================" << std::endl;
    std::clog << "\t Nao ha roupas no estoque" << std::endl;
    std::clog << "=============================================" << std::endl;

  }

}
