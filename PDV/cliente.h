#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <vector>
#include <iostream>

class Cliente {
 public:
   Cliente();
   Cliente( const std::string& name );
   virtual ~Cliente( void );

   void setName( const std::string& name );
   inline std::string getName( void ) const {return this->name_;}

 private:
   std::string name_;

 protected:
   std::vector<Cliente> clientes_;
};

#endif // CLIENTE_H