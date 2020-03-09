#ifndef SINGLEPLAYER_H
#define SINGLEPLAYER_H

#include "player.h"

#include "board.h"

class SinglePlayer : public Player { 
 public:
   SinglePlayer( class Board* b, const int& type );
   SinglePlayer( class Board* b );

   void Mark( void ); 
   bool Play( void ); 

 private:

   Board* b_;
   int type_;
};

#endif
