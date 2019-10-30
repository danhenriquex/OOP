#include "venda.h"

Venda::Venda()

{}

Venda::Venda( Cliente* nome, Roupa* roupa) 
    : c_(*nome), r_(*roupa)

{}

Venda::~Venda() 

{}

// void Venda::GuardaVenda( Venda* v ) {

//   this->vendas_.push_back( v );
// }
