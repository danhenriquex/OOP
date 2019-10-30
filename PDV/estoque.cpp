#include "estoque.h"

void Estoque::GuardaRoupas(const Roupa& roupa) {

  this->roupas_.push_back(roupa);
}

Roupa* Estoque::getRoupa( const int& id ) {

  for (unsigned int i = 0; i < this->roupas_.size(); ++i) {

    Roupa& r = roupas_[i];

    if (id == r.getCod())
      return &r;

  }

  std::clog << "=================================== " << std::endl;
  std::clog << "\t Roupa nao cadastrada no sistema" << std::endl;  
  std::clog << "=================================== " << std::endl;

  return NULL;
}

void Estoque::Exemplares( const int& id ) {

  for (unsigned int i = 0; i < this->roupas_.size(); ++i) {

    Roupa& r = roupas_[i];

    if (r.getCod() == id) {

      std::clog << "========= Exemplares ==========" << std::endl;
      std::clog << "Quantidade: " << r.getQnt() << std::endl;
      std::clog << "===============================" << std::endl; 

    }

  }  

}

void Estoque::MostraRoupas() {

  for (unsigned int i = 0; i < this->roupas_.size(); ++i) {

    Roupa& r = roupas_[i];

    std::clog << "================ Roupas =================== " << std::endl;
    std::cout << "ID: " << r.getCod() << std::endl;
    std::cout << "Tamanho: " << r.getTam() << std::endl;
    std::cout << "Exemplares: " << r.getQnt() << std::endl;
    std::clog << "===========================================" << std::endl;

  }

}
