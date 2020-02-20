#ifndef BOARD_H
#define BOARD_H

#include <iostream> 
#include <vector>
#include <algorithm>
#include <string>

#include "player.h"
#include "teclado.h"

class Board {
 public:
   Board( void );

   void Draw( void ); // Exibição do tabuleiro
   void Mark( const int& x ); // boleano
   void Logic( const int& x ); // boleano
   bool Winner( Board* b );
   
   friend class Match; // Classe que vai dizer se há um ganhandor ou não.

 protected:   
   std::vector< std::vector<int> > matrix_; // Estrutura de dados que representa o tabuleiro

 private:
   const int empty_ = 0;
   const int ball_ = 1;
   const int x_ = 4;
   const int size_ = 3;
   int mark_x = 0;
   int mark_y = 0;
};

#endif
