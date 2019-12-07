#include "cliente.h"

Cliente::Cliente() 

{}

Cliente::Cliente( const std::string& name )
    : name_(name)

{}

Cliente::~Cliente( void ) 

{}

void Cliente::setName( const std::string& name ) {

  this->name_ = name;
}
