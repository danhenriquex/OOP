#ifndef SINGLEPLAYER_H
#define SINGLEPLAYER_H

#include "player.h"

#include "board.h"

class SinglePlayer : public Player { //Ajeitar para o singleplayer ter o controle do teclado
 public:
   SinglePlayer( class Board* b, const int& type );
   SinglePlayer( class Board* b );

   void Mark( const int& x, const int& y, const int& type ); 
   bool Play( void ); // Mudar a função a player pois ja tenho o type

   Board* b_;

   int type_;
};

#endif
