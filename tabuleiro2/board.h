
#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>

#include "player.h"
#include "teclado.h"
#include "singleplayer.h"
#include "smartplayer.h"

class Board {
 public:
   Board( void );

   void Draw( void ); // Exibição do tabuleiro
   bool Winner( Board* b );

   friend class SinglePlayer;
   friend class SmartPlayer;

 protected:
   std::vector< std::vector<int> > matrix_; // Estrutura de dados que representa o tabuleiro

 private:
   const int vazio = 0;
   const int PO = 1;
   const int PX = 4;
   const int size_ = 3;
   int coord_x = 0;
   int coord_y = 0;
};

#endif
