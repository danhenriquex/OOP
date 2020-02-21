#ifndef SINGLEPLAYER_H
#define SINGLEPLAYER_H

#include "player.h"

#include "board.h"

class SinglePlayer : public Player{
 public:
   SinglePlayer( Board* b, const int& type );

   bool Play( const int& x );

   Board* b_;

   int type_;
};

#endif
