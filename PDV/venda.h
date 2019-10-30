#ifndef VENDA_H
#define VENDA_H

#include "loja.h"

class Venda : public Cliente, public Estoque {
 public:
   Venda();
   Venda( Cliente* nome, Roupa* roupa );
   ~Venda();

   void GuardaVenda( class Venda* v);

//  private:
  Cliente c_;
  Roupa r_;
};

#endif // VENDA_H