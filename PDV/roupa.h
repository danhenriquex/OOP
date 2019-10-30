#ifndef ROUPA_H
#define ROUPA_H

#include <iostream>
#include <string>
#include <vector>

class Roupa {
 public:
   Roupa();
   Roupa( const int& cod, const int& tam, const int& qnt );
   virtual ~Roupa( void );

   void setCod(const int& cod);
   void setTam(const int& tam);
   void setQnt(const int& qnt);
   inline int getCod( void ) const {return this->cod_;}
   inline int getTam( void ) const {return this->tam_;}
   inline int getQnt( void ) const {return this->qnt_;}

 private:
   int cod_;
   int tam_;
   int qnt_;
};

#endif // ROUPA_H