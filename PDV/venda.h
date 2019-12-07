#ifndef VENDA_H
#define VENDA_H

#include "loja.h"

class Venda {
 public:
   Venda();
   Venda( Cliente* nome, Roupa* roupa );
   ~Venda();

//  private:
  Cliente c_;
  Roupa r_;
};

#endif // VENDA_H
