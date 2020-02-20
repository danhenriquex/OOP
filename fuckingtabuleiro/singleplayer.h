#ifndef SINGLEPLAYER_H
#define SINGLEPLAYER_H

#include "player.h"

#include "board.h"

class SinglePlayer : public Player{
 public:
   SinglePlayer( Board* b, const int& type );

   bool Play( const int& x );
   void setBoard( Board* b ) {this->b_ = b;}
   Board* getBoard( void ) { return this->b_;}

   Board* b_;

   int type_;
};

#endif
