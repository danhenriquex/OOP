#include "venda.h"

Venda::Venda()

{}

Venda::Venda( Cliente* nome, Roupa* roupa ) 
    : c_(*nome), r_(*roupa)

{}

Venda::~Venda() 

{}

