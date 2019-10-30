#ifndef ESTOQUE_H
#define ESTOQUE_H

#include "roupa.h"

class Estoque : public Roupa {
 public:
   
   void MostraRoupas();
   void GuardaRoupas(const Roupa& r);
   void Exemplares( const int& id );
 
   Roupa* getRoupa( const int& id );

 protected:
   std::vector<Roupa> roupas_;
};

#endif // ESTOQUE_H
