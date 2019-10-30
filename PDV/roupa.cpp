#include "roupa.h"

Roupa::Roupa() {
  
}

Roupa::Roupa( const int& cod, const int& tam, const int& qnt ) 
    : cod_(cod), tam_(tam), qnt_(qnt)

{}

Roupa::~Roupa() {

}

void Roupa::setCod( const int& cod ) {

  this->cod_ = cod;
}

void Roupa::setTam( const int& tam ) {

  this->tam_ = tam;
}

void Roupa::setQnt( const int& qnt ) {

  this->qnt_ = qnt;
}
