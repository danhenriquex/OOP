#pragma once

#include "pessoa.h"

class CadastroPessoa {
 public:
   CadastroPessoa( void );
   ~CadastroPessoa( void );

   void ImprimeDados( void );
   void ImprimeMediaIdade( void );
   void GuardaPessoas( const Pessoa& p );

 private:
   std::vector<Pessoa> pessoas_;
};
