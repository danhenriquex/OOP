#ifndef LOJA_H
#define LOJA_H

#include "cliente.h"
#include "roupa.h"
#include "estoque.h"
#include "venda.h"

class Loja : public Cliente { 
 public:
   Loja();

   void CadastraVenda( Estoque& e, const std::string& nome, const int& id, const int& qnt_venda ); 
   void ClienteRoupa( const std::string& cliente ); // Quais são os clientes que já compraram uma determinada roupa?
   void RoupaCliente( const int& id ); // Quais foram as roupas comprados por um cliente?
   void GuardaCliente( const Cliente& c );
   void MostraClientes( void );
   void GuardaVenda( class Venda* v );
   void MostrarVenda( void );

   Cliente* getCliente( const std::string& nome );

 private:
   std::vector<class Venda*> vendas_;
};

#endif // LOJA_H